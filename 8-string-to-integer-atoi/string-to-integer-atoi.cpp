class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int cnt = 0;
        bool neg = false;
        int ascii;
        int ans = 0;
        
        // Skip leading spaces
        while (cnt < n && s[cnt] == ' ') {
            cnt++;
        }
        
        // Check for optional sign
        if (cnt < n && s[cnt] == '-') {
            neg = true;
            cnt++;
        } else if (cnt < n && s[cnt] == '+') {
            cnt++;
        }
        
        // Convert digits to integer
        while (cnt < n && s[cnt] >= '0' && s[cnt] <= '9') {
            int digit = s[cnt] - '0';
            
            // Handle overflow/underflow
            if (ans > (INT_MAX - digit) / 10) {
                return neg ? INT_MIN : INT_MAX;
            }
            
            ans = ans * 10 + digit;
            cnt++;
        }
        
        return neg ? -ans : ans;
    }
};
