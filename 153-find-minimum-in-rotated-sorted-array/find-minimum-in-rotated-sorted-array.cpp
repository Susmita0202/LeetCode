class Solution {
public:
    int findMin(vector<int>& nums) {
           int low = 0;
        int high = nums.size() - 1;
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            if (nums[mid] > nums[high]) {
                // Minimum is in the right part
                low = mid + 1;
            } else {
                // Minimum is in the left part (including mid)
                high = mid;
            }
        }
        
        return nums[low];
    }
};