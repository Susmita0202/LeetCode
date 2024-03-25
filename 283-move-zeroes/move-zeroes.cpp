class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //vector<int> temp;
        // 2 pointer approach
        int i1=0;
        for(int j=0;j<nums.size();j++){
            
            if(nums[i1]==0){
                if(nums[j]!=0){
                nums[i1]=nums[j];
                nums[j]=0;
                i1++;
            }
            }
            else{
                i1++;
            }
        }
     
    }
};