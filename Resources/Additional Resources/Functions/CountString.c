// C program to count number of strings
// of n characters with given constraints
#include<stdio.h>
#include<stdlib.h>

// n is total number of characters.
// bCount and cCount are counts of 'b'
// and 'c' respectively.
int countStr(int n, int bCount, int cCount)
{
    // Base cases
    if (bCount < 0 || cCount < 0) return 0;
    if (n == 0) return 1;
    if (bCount == 0 && cCount == 0) return 1;

    // Three cases, we choose, a or b or c
    // In all three cases n decreases by 1.
    int res = countStr(n-1, bCount, cCount);
    res += countStr(n-1, bCount-1, cCount);
    res += countStr(n-1, bCount, cCount-1);

    return res;
}

// Driver code
int main()
{
    int n = 3; // Total number of characters
    printf("%d",countStr(n, 1, 2));
    return 0;
}


