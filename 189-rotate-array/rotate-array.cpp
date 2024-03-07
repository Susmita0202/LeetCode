class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size(); // Ensure k is within the range of nums.size()
        if (k == 0) return; 
        int temp[k];
        // Copy the last k elements to temp
        for (int i = nums.size() - k, j = 0; i < nums.size(); ++i, ++j) {
            temp[j] = nums[i];
        }
        // Shift elements to the right by k positions
        for (int i = nums.size() - 1; i >= k; --i) {
            nums[i] = nums[i - k];
        }
        // Copy elements from temp back to nums
        for (int i = 0; i < k; ++i) {
            nums[i] = temp[i];
        }
    }
};