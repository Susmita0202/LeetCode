class Solution {
public:
    string largestOddNumber(string num) {
         int n = num.size() - 1;
        while (n >= 0 && num[n] % 2 == 0) {
            n--;
        }
        if (n == -1) {
            return "";
        }
        return num.substr(0, n + 1);
    }
};