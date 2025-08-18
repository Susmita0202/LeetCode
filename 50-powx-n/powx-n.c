double myPow(double x, int n) {
    
  double powval = 1.0;
    long long abs_n = n; 
    
    if (n < 0) {
        x = 1 / x;        
        abs_n = -abs_n;   
    }
    
    while (abs_n > 0) {
        if (abs_n % 2 == 1) {
            powval = powval * x;
        }
        x = x * x;           
        abs_n /= 2;       
    }
    
    return powval;

}
