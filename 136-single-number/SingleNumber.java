class Solution {
    public int singleNumber(int[] nums) {
        int n = nums.length;
        int xors = nums[0];
        for(int i = 1; i < n; i++){
            xors = xors ^ nums[i];
        }
        return xors;
    }
}
