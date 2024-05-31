#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\nEnter first number\n");
    scanf("%d", &a);

    printf("\nEnter Second number\n");
    scanf("%d", &b);

    //printf("\nEnter third number\n");
    //scanf("%d", &c);

    if (a > b)
    {
        printf("a is greater than b");
    }
    if (b > a)
    {
        printf("b is greater than a");
    }
    if (b == a)
    {
        printf("b and a are equal");
    }
}
