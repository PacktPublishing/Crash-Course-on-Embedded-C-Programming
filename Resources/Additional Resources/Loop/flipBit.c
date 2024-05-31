// Count number of bits to be flipped
// to convert A into B
#include <stdio.h>

/* Function to get no of set bits in binary
representation of positive integer n */
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
// Function that return count of
// flipped number
int FlippedCount(int a, int b)
{
    // Return count of set bits in
    // a XOR b
    return countSetBits(a^b);
}
/* Program to test function countSetBits */
int main()
{
    int a = 10;
    int b = 20;
    printf("%d", FlippedCount(a, b));
    return 0;
}
