int* majorityElement(int* nums, int numsSize, int* returnSize) {
    int* result = NULL;
    int candidate1 = 0, candidate2 = 0, count1 = 0, count2 = 0;
    int threshold = numsSize / 3;

    for (int i = 0; i < numsSize; i++) {
        int num = nums[i];
        if (num == candidate1) {
            count1++;
        } else if (num == candidate2) {
            count2++;
        } else if (count1 == 0) {
            candidate1 = num;
            count1 = 1;
        } else if (count2 == 0) {
            candidate2 = num;
            count2 = 1;
        } else {
            count1--;
            count2--;
        }
    }

    count1 = count2 = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == candidate1) {
            count1++;
        } else if (nums[i] == candidate2) {
            count2++;
        }
    }

    int resultSize = 0;
    if (count1 > threshold) {
        result = (int*)malloc(sizeof(int));
        result[resultSize++] = candidate1;
    }
    if (count2 > threshold) {
        if (result == NULL) {
            result = (int*)malloc(sizeof(int));
        } else {
            result = (int*)realloc(result, 2 * sizeof(int));
        }
        result[resultSize++] = candidate2;
    }

    *returnSize = resultSize;
    return result;
}
