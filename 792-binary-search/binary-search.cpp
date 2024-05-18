class Solution {
public:
    int bsearch(vector<int>& nums,int low,int high, int target){
        if(low>high){
            return -1;
        }
        int mid=(low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(target>nums[mid]){
            return bsearch(nums,mid+1,high,target);
        }
        return bsearch(nums,low,mid-1,target);
    }
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int ans;
        ans=bsearch(nums,low,high,target);
        return ans;
    }
};