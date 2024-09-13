#include<stdio.h>

// write a function to accept an array of float values,
// multiply them with 2 and print the result

void printmul(float my[] );

void main()
{
    float val[] = {24.1, 15.6, 39.6, 54.2, 10.52};
    printmul(val);

}

void printmul(float my[] )
{
    int i;
    float j;
    for(i = 0; i < 5; i++)
    {
        j = my[i] * 2;
        printf("\n%1.1f X 2 = %1.1f\n", my[i], j);
    }
}
