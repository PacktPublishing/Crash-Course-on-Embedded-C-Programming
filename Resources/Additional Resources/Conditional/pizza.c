// C implementation of the approach
#include<stdio.h>
#include<stdlib.h>

// Function to check if it is possible
// to cut the pizza in the given way
void cutPizza(int n)
{
    // Case 1
    printf("%d",((360 % n == 0) ? 1 : 0));

    // Case 2
    printf("%d",((n <= 360) ? 1 : 0));

    // Case 3
    printf("%d",((((n * (n + 1)) / 2) <= 360) ? 1 : 0));
}

// Driver code
int main()
{
    int n = 7;
    cutPizza(n);

    return 0;
}


