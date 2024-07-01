#include <string>
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        if(s==goal){
            return true;
        }
        string ans;
        int n=s.size();
        for(int i=1;i<s.size();i++){
            ans=s.substr(i,n-1)+s.substr(0,i);
            if(ans==goal){
                return true;
            }
        }
        return false;
        
    }
};