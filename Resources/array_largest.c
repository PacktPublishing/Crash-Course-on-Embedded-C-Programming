/*
Scan 6 numbers and store in an array
and then print the largest one out of them

1. scanning number
    -- for loop
    -- scanf
2. finding largest
    -- for loop
    -- if condition
*/
#include<stdio.h>
void main()
{
    unsigned int a[10];
    int i,j;
    unsigned int largest;
    printf("\nEnter 6 numbers one by one\n");
    for (i=0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nArray scanning is done\n");

    largest = a[0];
    for(i = 0; i < 6; i++)
    {
        if (largest < a[i])
        {
            largest = a[i];
        }
    }
    printf("\nThe largest number of array = %d\n", largest);
}
