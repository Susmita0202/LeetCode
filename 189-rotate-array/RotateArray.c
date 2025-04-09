void rotate(int* nums, int n, int k) {
    k=k%n;
    int t[n], j=k;
    for(int i=0; i< n-k; i++){
        t[j++]=nums[i];
    }
    for(int i=n-k, j=0; i<n; i++){
        t[j++]=nums[i];
    }
    for(int i=0; i<n; i++){
        nums[i]=t[i];
    }
}
