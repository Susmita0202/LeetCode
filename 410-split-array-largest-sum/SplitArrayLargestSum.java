class Solution {
    public int splitArray(int[] nums, int k) {
        int l=nums.length;
        int low=Integer.MIN_VALUE,high=0;
        for(int i=0;i<l;i++){
            low=Math.max(low,nums[i]);
            high+=nums[i];
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int count=1,lastSum=0;
            for(int i=0;i<l;i++){
                if(lastSum+nums[i]>mid){
                    count++;
                    lastSum=nums[i];
                }
                else lastSum+=nums[i];
            }
            if(count>k) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
}
