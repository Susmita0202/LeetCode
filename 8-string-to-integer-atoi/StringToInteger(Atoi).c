int myAtoi(char* s) {
    long long result = 0;   // Accumulator (long long avoids UB while parsing)
    int sign = 1;           // Default positive

    // 1. Skip leading spaces
    while (*s == ' ') {
        s++;
    }

    // 2. Handle optional sign
    if (*s == '+' || *s == '-') {
        if (*s == '-') sign = -1;
        s++;
    }

    // 3. Read digits
    while (isdigit((unsigned char)*s)) {
        int digit = *s - '0';

        // 4. Pre-check for overflow before updating result
        if (result > INT_MAX / 10 || 
           (result == INT_MAX / 10 && digit > (sign == 1 ? 7 : 8))) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;  // Safe to update
        s++;
    }

    return (int)(sign * result);
}
