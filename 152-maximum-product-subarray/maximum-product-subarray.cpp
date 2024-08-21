class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        double pre = 1.0;
        double suff = 1.0;
        double maxm = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (pre == 0.0) {
                pre = 1.0;
            }
            if (suff == 0.0) {
                suff = 1.0;
            }
            pre *= nums[i];
            suff *= nums[n - i - 1];

            maxm = max(maxm, max(pre, suff));
        }

        return static_cast<int>(maxm);
        
    }

};