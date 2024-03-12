class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        int max=0;
        int num=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second>max){
                max=it.second;
                num=it.first;
            }
        }
        return num;
    }
};