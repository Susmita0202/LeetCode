class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp(nums.size(), 0);
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                temp[c]=nums[i];
                c++;
            }
        }
        for(int i=c;i<nums.size();i++){
            temp[i]=0;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=temp[i];
        }
    }
};