class Solution {
public:
    double myPow(double x, int n) {
       if (n == 0) return 1;  // Base case: x^0 = 1
        if (n < 0) {
            if (n == INT_MIN) {  // Special case for -2147483648
                x = 1 / x;
                n = INT_MAX;     // Set n to the largest positive value
                return x * myPow(x, n);  // Handle this specific case
            }
            return 1 / myPow(x, -n);  // General negative exponent case
        }
        if (n % 2 == 0) {  // If n is even
            double half = myPow(x, n / 2);
            return half * half;
        } else {  // If n is odd
            return x * myPow(x, n - 1);
        }
    }
};