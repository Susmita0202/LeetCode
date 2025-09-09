int maxProduct(int* nums, int numsSize) {
    int maxProd = nums[0], minProd = nums[0], result = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < 0) {
     
            int temp = maxProd;
            maxProd = minProd;
            minProd = temp;
        }

      
        maxProd = (nums[i] > nums[i] * maxProd) ? nums[i] : nums[i] * maxProd;
        minProd = (nums[i] < nums[i] * minProd) ? nums[i] : nums[i] * minProd;

        if (maxProd > result) result = maxProd;
    }

    return result;
}
