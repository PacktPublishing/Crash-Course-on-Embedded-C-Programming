// C program to count squares
// in a rectangle of size m x n

#include <stdio.h>

// Returns count of all squares
// in a rectangle of size m x n
int countSquares(int m, int n)
{
int temp;
// If n is smaller, swap m and n
if (n < m)
{
    temp=n;
    n=m;
    m=temp;
}
// Now n is greater dimension,
// apply formula
return m * (m + 1) * (2 * m + 1) /
    6 + (n - m) * m *(m + 1)/ 2;
}

// Driver Code
int main()
{
    int m = 4, n = 3;
    printf("Count of squares is %d",countSquares(m, n));
}



