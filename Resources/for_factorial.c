/*
Find out factorial of a scanned number
factorial of 6 =  1 x 2 x 3 x 4 x 5 x 6
*/
#include<stdio.h>
void main()
{
    int a, fact, i;
    fact = 1;
    printf("\nPlease enter a number for which Factorial is to be calculated\n");
    scanf("%d", &a);

    for(i = 1; i<=a; i++ )
    {
        fact = fact * i;
    }
    printf("\nFactorial of %d = %d\n",a,fact);
}
