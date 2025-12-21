int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max=-1;
    int count=0;
    for(int i=0;i<=numsSize-1;i++){
        if(nums[i]==1){
            count++;
        }
        if(nums[i]==0){
            count=0;
        }
        if(count>max){
            max=count;
        }
    }
    return max;
}
