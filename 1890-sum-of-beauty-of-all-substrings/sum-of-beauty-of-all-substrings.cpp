class Solution {
public:
    int beauty(vector<int>&arr){
        int m1=-1;
        int lf=1e9;
        for(int i=0;i<arr.size();i++){
            m1=max(m1,arr[i]);
            if(arr[i]>=1){
                lf=min(lf,arr[i]);
            }
        }
        return (m1-lf);
    }
    int beautySum(string s) {
        int n=s.size();
        string str="";
        //int a=0;      //To increase the length of substring     
        int ans=0;
        for(int i=0;i<n;i++){
            vector<int> cnt(26, 0);
            for(int j=i;j<n;j++){
                //str=s.substr(i,(j-i+1));
                cnt[s[j] - 'a']++;
                ans=ans+beauty(cnt);
            }
        }
        return ans;
    }
};