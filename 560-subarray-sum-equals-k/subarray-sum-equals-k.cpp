class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       //int left=0;
        int psum=0;
       // int right=-1;
        int count=0;
        int n=nums.size();
        int diff=0;
        map<int,int> mpp;
        mpp[0]=1;
       for(int i=0;i<n;i++){
        psum=psum+nums[i];
        diff=psum-k;
        count+=mpp[diff];
        mpp[psum]++;
       }
       return count;
    }
};