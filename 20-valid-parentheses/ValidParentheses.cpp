class Solution {
public:
    bool isValid(string s) {
        int n=s.size();

        if(n%2)return false;
        if(s[0]==']'||s[0]=='}'||s[0]==')')return false;
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]=='{'||s[i]=='['||s[i]=='(')st.push(s[i]);
            if(s[i]==')'){
              if(!st.empty()&&st.top()=='(')st.pop();
              else{
                return false;
              }
            }
            if(!st.empty()&&s[i]==']'){
              if(st.top()=='[')st.pop();
              else{
                return false;
              }
            }
            if(!st.empty()&&s[i]=='}'){
              if(st.top()=='{')st.pop();
              else{
                return false;
              }
            }
            
        }
        if(!st.empty())return false;
        return true;
    }
};
