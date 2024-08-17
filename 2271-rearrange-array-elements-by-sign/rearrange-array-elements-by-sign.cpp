class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     int p=0;
     int n=0;
     vector<int> ans;
     int temp=0;
     for(int i=0;i<nums.size();i++){
        if(i%2){
            while(n<nums.size()){
                if(nums[n]<0){
                    temp=nums[n];
                    break;
                }
                n++;
            }
            ans.push_back(temp);
            n++;
        }
        else{
            while(p<nums.size()){
                if(nums[p]>=0){
                    temp=nums[p];
                    break;
                }
                p++;
            }
            ans.push_back(temp);
            p++;
        }
     }   
     return ans;
    }
};