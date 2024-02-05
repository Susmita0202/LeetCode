class Solution {
public:
    int reverse(int x) {
        long r=0;
        int digit;
        while(x!=0){
            digit=x%10;
           if (r > INT_MAX / 10 || (r == INT_MAX / 10 && digit > 7)) {
                return 0;
            }
            if (r < INT_MIN / 10 || (r == INT_MIN / 10 && digit < -8)) {
                return 0;
            }
            r=r*10+digit;
            x=x/10;
        }
        
        return int(r);
    }
};