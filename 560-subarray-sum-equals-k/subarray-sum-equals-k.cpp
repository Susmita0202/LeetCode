class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int psum=0;
        int count=0;
        int diff=0;
        map<int,int> mpp;
        mpp[0]=1;
       for(int i=0;i<nums.size();i++){
        psum=psum+nums[i];
        diff=psum-k;
        count+=mpp[diff];
        mpp[psum]++;
       }
       return count;
    }
};