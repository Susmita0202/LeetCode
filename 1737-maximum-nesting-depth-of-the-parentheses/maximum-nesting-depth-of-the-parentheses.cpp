class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int maxc=0,cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                cnt++;
                maxc=max(maxc,cnt);
            }
            else if(s[i]==')'){
                cnt--;
            }
        }
        return maxc;
    }
};