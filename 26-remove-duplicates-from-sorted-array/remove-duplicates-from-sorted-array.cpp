class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mpp;
        int k=0;
        
        for(int i=0;i< nums.size();i++){
            mpp[nums[i]]++;
        }
        int i=0;
         for(auto it:mpp){
             nums[i]=it.first;
             k++;
             i++;
         }
         return k;
    }
};