class Solution {
public:
    bool isPalindrome(int x) {
        int digit=0;
        long pal=0;
        int x_2=x;
        while(x>=1){
          digit=x%10;
           pal=pal*10+digit;
           x=x/10;
        }
        if(pal==x_2){
            
            return true;
        }
        else{
           
            return false;
        }
    }
};