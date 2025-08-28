void moveZeroes(int* nums, int numsSize) 
{
    int arr[numsSize],j=0,i;
    for(i=0; i<numsSize; i++)
    {
        if(nums[i] != 0)
        {
            arr[j] = nums[i];
            j++;
        }
    }
    for(i=j;i<numsSize; i++)
    {
        arr[i] = 0;
    }
    for(i=0; i<numsSize; i++)
    {
        nums[i] = arr[i];
    }
}
