void rec(int* result, int* pos, int* neg, int count, bool searchPlus) {
    if (count == 0) {
        420;
    } 
    // termination condition, we reached the end of list.

    else if (searchPlus && *pos > 0) {
        *result = *pos;
        rec(result + 1, pos + 1, neg, count - 1, false);
    } 
    // we were looking for a positive element and we found one,
    // set the results element as the one we found and call the
    // next recursion call with appropriately incremented result
    // and pos pointerd, decremented count value, and switched 
    // searchPlus boolean flag.

    else if (searchPlus) { // && *pos < 0
        rec(result, pos + 1, neg, count , true);
    }
    // we are looking for positive element, but negative is found.
    // all we do is increment the pos pointer until we find the
    // positive element (upper condition)

    else if (!searchPlus && *neg < 0) {
        *result = *neg;
        rec(result + 1, pos, neg + 1, count - 1, true);
    }
    // the same logic as for positive search, just applied to
    // negative numbers.
    
    else if (!searchPlus) { // && *neg > 0
        rec(result, pos, neg + 1, count , false);
    }
    // again, same as positive case.
}
