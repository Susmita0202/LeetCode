class Solution {
public:
    int maxDay(vector<int> &b){
        int n=b.size();
        int max=0;
        for(int i=0;i<n;i++){
            if(b[i]>max){
                max=b[i];
            }
        }
        return max;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=1;
        int high=maxDay(bloomDay);
        int n=bloomDay.size();
        int bloom=0;
        int consequtive=0;
        int ans=0;
        int days=-1;
        while(low<=high){
            int mid=(low+high)/2;
            consequtive=0;
            bloom=0;
            ans=0;
            for(int i=0;i<n;i++){
                if(bloomDay[i]<=mid){
                    bloom+=1;
                    if(bloom==k){
                        ans++;
                        bloom=0;
                    }
                }
                else{
                    bloom=0;
                }
            }
            if(ans>=m){
                days=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return days;
    }
};