class Solution {
    public int maxProduct(int[] nums) {
        int n=nums.length; // Get the size of the array
        int maxProduct= nums[0];// Initialize maxProduct to the first element
        int prefix=1, suffix=1; // Prefix and Suffix products
          // Traverse the array from left to right
        for(int i=0;i<n;i++){
            // If prefix product becomes zero, reset it to 1
            if(prefix==0) prefix=1;
            // If suffix product becomes zero, reset it to 1
            if(suffix==0) suffix=1;
            prefix*=nums[i];
            suffix*=nums[n-i-1];
            // Update the maximum product found so far
            maxProduct=Math.max(maxProduct, Math.max(prefix,suffix));

        }

        return maxProduct; // Return the maximum product found
    }
}
