class Solution {
public:
    int sum(vector<int> &weights){
        int summ=0;
        for(int i=0;i<weights.size();i++){
            summ+=weights[i];
        }
        return summ;
    }
    int largest(vector<int> &weights){
        int large=-1;
         for(int i=0;i<weights.size();i++){
            large=max(large,weights[i]);
         }
         return large;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=largest(weights);
        int high=sum(weights);
        int n=weights.size();
        while(low<=high){
            int mid=(high+low)/2;
            int ndays=1;
            int load=0;
            for(int i=0;i<n;i++){
                if((load+weights[i])>mid){
                    load=weights[i];
                    ndays=ndays+1;
                }
                else {
                    load+=weights[i];
                }
            }
            if(ndays<=days){
                high=mid-1;
            }
            // else if(ndays==days){
            //     return mid;
            // }
            else{
                 low=mid+1;
            }

        }
        return low; //try 3
    }
};