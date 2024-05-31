#include<stdio.h>
int factorial(int num);

void  main()
{
    int a, b;
    printf("Enter a number for factorial calculations\n");
    scanf("%d", &a);
    b = factorial(a);
    printf("Factorial of %d = %d", a,b);
}
int factorial(int num)
{
    int myfact = 1;
    int i;
    for(i = 1; i <= num; i++)
    {
        myfact = myfact * i;
    }
    return myfact;
}
