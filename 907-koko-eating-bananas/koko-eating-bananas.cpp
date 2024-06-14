class Solution {
public:
    int findMax(vector<int> &piles){
        int maxi=INT_MIN;
        int n=piles.size();
        for(int i=0;i<n;i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
     int low=1;
     int high=findMax(piles);
     while(low<=high){
        int mid=(low+high)/2;
        int n=piles.size();
        double totalH=0;
        int ans=0;
        for(int i=0;i<n;i++){
            totalH+=ceil((double)piles[i]/(double)mid);
        }
        long long int total=(long long int)totalH;
        if(total>h){
            low=mid+1;
        }
        else {
            high=mid-1;
        }
     }
     cout<<endl;
     cout<<endl;
     return low;
    }
    
};