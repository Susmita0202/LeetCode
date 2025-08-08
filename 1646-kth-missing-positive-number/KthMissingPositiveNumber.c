int findKthPositive(int* arr, int arrSize, int k) {
    int low=0;
    int high=arrSize;
    while (low<high)
    {
        int mid=(low+high)/2;
        int missing = arr[mid]-(mid+1);
        if(missing<k)
        {
            low=mid+1;
    
        }
        else
        {
            high=mid;
        }
    }   
    return low+k;
}
