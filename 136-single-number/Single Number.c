int singleNumber(int* nums, int numsSize) {
    int uniquenum=0;
    for(int i=0;i<numsSize;i++){
        uniquenum=uniquenum^nums[i];
    }
    return uniquenum;
}
