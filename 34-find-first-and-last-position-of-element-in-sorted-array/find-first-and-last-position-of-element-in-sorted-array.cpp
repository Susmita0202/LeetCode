class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     vector<int> ans(2, -1);  // Initialize ans with -1, -1
        int low = 0;
        int high = nums.size() - 1;
        
        // Find the first occurrence of target
        while (low <= high) {
            int mid = low + (high - low) / 2; // Avoid overflow
            if (nums[mid] >= target) {
                if (nums[mid] == target) ans[0] = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        // Reset low and high for the second search
        low = 0;
        high = nums.size() - 1;
        
        // Find the last occurrence of target
        while (low <= high) {
            int mid = low + (high - low) / 2; // Avoid overflow
            if (nums[mid] <= target) {
                if (nums[mid] == target) ans[1] = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return ans;
    }
};