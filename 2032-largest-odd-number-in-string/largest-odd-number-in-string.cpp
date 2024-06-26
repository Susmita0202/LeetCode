class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size()-1;
        int n2=0;
        while(n>=0){
            if(num[n]%2!=0){
                n2=n;
                break;
            }
            else{
                n--;
            }
            
        }
        string ans;
        if(n==-1){
            ans="";
            return ans;
        }
        for(int i=0;i<=n2;i++){
            ans+=num[i];
        }
        return ans;
    }
};