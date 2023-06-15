/*
5. Write a program to find total number of bits set in a given array.
Say we have a array of 3 elements
a[3] = {0x1, 0xF4, 0x10001};
The total number of set bits in the given array is
1 bit in 0x01, 5 in 0xF4, 2 in 0x10001, so the total is 1 + 5 + 2 = 8 bits

Topics to be covered
- Arrays
- Loops
- Bitwise Operators
*/

// SAME as L1_Ans4.c (above)

#include <stdio.h>

int countSetBits(unsigned int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

int main() {

    unsigned int a[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(a) / sizeof(a[0]);
    int totalSetBits = 0;
    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(a[i]);
    }
    printf("Total number of set bits: %d\n", totalSetBits);
    return 0;
    
}