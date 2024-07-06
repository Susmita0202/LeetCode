class Solution {
public:
    int myAtoi(string s) {
         int n = s.size();
        int cnt = 0;
        bool neg = false;
        int ascii;
        int ascii2;
        int ans = 0;

        // Skip leading whitespaces
        if (s[0] == ' ') {
            for (int i = 0; i < n; i++) {
                if (s[i] == ' ') {
                    cnt++;
                } else {
                    break; // stop at the first non-space character
                }
            }
        }

        // Handle optional sign
        if (s[cnt] == '-') {
            neg = true;
            cnt++;
        } else if (s[cnt] == '+') {
            cnt++;
        }

        // Convert characters to integer
        for (int i = cnt; i < n; i++) {
            ascii = (int)s[i];

            if (i + 1 < n) {
                ascii2 = (int)s[i + 1];
            } else {
                ascii2 = -1; // Ensure ascii2 is not valid if out of bounds
            }

            if (ascii >= 48 && ascii <= 57) {
                int digit = ascii - 48;

                // Check for overflow/underflow
                if (ans > (INT_MAX - digit) / 10) {
                    return neg ? INT_MIN : INT_MAX;
                }

                ans = ans * 10 + digit;
            } else {
                break;
            }
        }

        // Apply sign
        if (neg) {
            ans = -ans;
        }

        return ans;
    }
};