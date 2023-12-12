class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=0;
        int maxs=nums[0];
        for (int i=0;i<nums.size();i++){
            if(cursum<0){
                cursum=0;
            }
            cursum+=nums[i];
            if(cursum>maxs){
                maxs=cursum;
            }
            
        }
        return maxs;
    }
};