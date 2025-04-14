class Solution {
    public int findPeakElement(int[] arr) {
        int low = 0, high = arr.length-1;
        if(arr.length == 1) return 0; //just for optimisation
        while(low<high){
            int mid = low+(high-low)/2;
            if(arr[mid]<arr[mid+1]){ // mid element smaller, eliminate left
                low = mid+1;
            }else{// mid elem bigger, eliminate right
                high = mid;
            }
        }
        return low;// return the only non-eliminated index
    }
}
