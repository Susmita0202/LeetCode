class Solution {
public:
    int maximum(vector<int> &arr) {
    int largest=arr[0];
    for(int i=0;i<arr.size();i++){
        largest=max(largest,arr[i]);
    }
    return largest;
}
int total(vector<int> &arr){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    return sum;
}
int totalstudents(vector<int> &arr,int k){
    int count=1;
    int pages=0;
    for(int i=0;i<arr.size();i++){
        if(pages+arr[i]<=k){
            pages+=arr[i];
        }
        else{
            pages=arr[i];
            count++;
        }
    }
    return count;
}
int findPages(vector<int> &arr, int n, int m) {
  // Write your code here.
  int low=maximum(arr);
  int high=total(arr);
  if(m>n){
      return -1;
  }
  while(low<=high){
      int mid=(low+high)/2;
      if(totalstudents(arr,mid)>m){
          low=mid+1;
      }
      else{
          high=mid-1;
      }
  }
  return low;
}
    int splitArray(vector<int>& nums, int k) {
        return findPages(nums,nums.size(),k);
    }
};