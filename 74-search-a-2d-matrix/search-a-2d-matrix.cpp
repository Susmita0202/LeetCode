class Solution {
public:
bool findelement(vector<int> arr,int target){
    int low=0;
    int high=arr.size()-1;
    bool ans=false;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            ans=true;
            break;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
    }
    return ans;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int m=matrix.size();
      int n=matrix[0].size();
      int low=0;
      int high=m-1;
      while(low<=high){
        int mid=(low+high)/2;
        if(matrix[mid][0]<=target && matrix[mid][n-1]>=target){
           return findelement(matrix[mid],target);
        }
        else if(matrix[mid][n-1]<target){
            low=mid+1;
        }
        else if(matrix[mid][0]>target){
            high=mid-1;
        }
      }
      return false;
    }
};