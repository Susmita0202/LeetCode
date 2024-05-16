class Solution {
public:
    int mergesort(vector<int> &arr,int low,int high){
        if (low >= high) return 0; // Base case for recursion
        //int mid=(low+high)/2;
        int mid = low + (high - low) / 2;
        int count=0;
        count+=mergesort(arr,low,mid);
        count+=mergesort(arr,mid+1,high);
        count+=countpairs(arr,low,mid,high);
        merge(arr,low,mid,high);
        return count;
    }
    int countpairs(vector<int> &arr,int low,int mid,int high){
        int right=mid+1;
        int count=0;
        for(int i=low;i<=mid;i++){
            while(right<=high && arr[i] > 2LL *arr[right]){
                right++;
            }
                count=count+(right-(mid+1));
            
        }
            return count;
        }
        void merge(vector<int> &arr,int low,int mid,int high){
            vector<int> temp;
            int left=low;
            int right=mid+1;
            while(left<=mid && right<=high){
                if(arr[left]<=arr[right]){
                    temp.push_back(arr[left]);
                    left++;
                }
                else{
                    temp.push_back(arr[right]);
                    right++;
                }

            }
            while(left<=mid){
                temp.push_back(arr[left]);
                left++;
            }
            while(right<=high){
                temp.push_back(arr[right]);
                right++;
            }
            for(int i=low   ;i<=high;i++){
                arr[i]=temp[i-low];
            }
        }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return mergesort(nums,0,n-1);
    }
    
};