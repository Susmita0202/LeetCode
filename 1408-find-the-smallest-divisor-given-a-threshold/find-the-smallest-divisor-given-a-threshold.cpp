class Solution {
public:
    int Maxelement(vector<int> &nums){
        int ele=0;
        for(int i=0;i<nums.size();i++){
            ele=max(ele,nums[i]);
        }
        return ele;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=Maxelement(nums);
        int sum=0;
        int n=nums.size();
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            sum=0;
            for(int i=0;i<n;i++){
                sum += ceil((double)nums[i] / mid);
            }
            if(sum>threshold){
                low=mid+1;
            }
            else if(sum<=threshold){
                high=mid-1;
                ans=mid;
            }
        }
        return ans;
    }
};