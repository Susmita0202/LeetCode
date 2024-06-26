class Solution {
public:
    string largestOddNumber(string num) {
         int n = num.size() - 1;
        // Iterate from the end to find the last odd digit
        while (n >= 0 && num[n] % 2 == 0) {
            n--;
        }
        // If no odd digit is found, return an empty string
        if (n == -1) {
            return "";
        }
        // Return the substring from the beginning to the last odd digit found
        return num.substr(0, n + 1);
    }
};