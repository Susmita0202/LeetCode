class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
     int low=0;
     int high=nums.size()-1;
     int mid=0;
     int ans=0;
     while(low<=high){
        mid=(low+high)/2;
         bool isLeftEqual = (mid > 0 && nums[mid] == nums[mid - 1]);
         bool isRightEqual = (mid < nums.size() - 1 && nums[mid] == nums[mid + 1]);

            if (!isLeftEqual && !isRightEqual) {
                return nums[mid];
            }
        if(mid%2==0){
            if(nums[mid]==nums[mid-1]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(nums[mid]!=nums[mid-1]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
     }
     return -1;

    }
};