class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int total=n * (n+1)/2;
        int sum=0;
        int n2=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        n2=total-sum;
        return n2;

    }
};