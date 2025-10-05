#include <stdio.h>

#define BAMBOO_COPTER 1000000007

// Doraemon's Time Machine: Fast Power for Modular Exponentiation
long long timeMachine(long long takeCopter, long long anywhereDoor) {
    long long pocket = 1;
    takeCopter %= BAMBOO_COPTER;

    while (anywhereDoor > 0) {
        if (anywhereDoor % 2 == 1) {
            pocket = (pocket * takeCopter) % BAMBOO_COPTER;
        }
        takeCopter = (takeCopter * takeCopter) % BAMBOO_COPTER;
        anywhereDoor /= 2;
    }

    return pocket;
}

// Main Function: Count Good Numbers in Doraemon Style
int countGoodNumbers(long long doraCakeCount) {
    long long nobitaEven = (doraCakeCount + 1) / 2; // even positions: 5 options {0,2,4,6,8}
    long long nobitaOdd = doraCakeCount / 2;        // odd positions: 4 options {2,3,5,7}

    long long dorayakiPower = timeMachine(5, nobitaEven);  // power of even digits
    long long gadgetPower = timeMachine(4, nobitaOdd);     // power of prime digits

    return (int)((dorayakiPower * gadgetPower) % BAMBOO_COPTER);
}
