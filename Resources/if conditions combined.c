#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("\nEnter first number\n");
    scanf("%d", &a);

    printf("\nEnter Second number\n");
    scanf("%d", &b);

    printf("\nEnter third number\n");
    scanf("%d", &c);

    printf("\nEnter fourth number\n");
    scanf("%d", &d);


    if (a > b && a > c && a > d)
    {
        printf("a is largest");
    }

    if (b > a && b > c && b > d)
    {
        printf("b is largest");
    }

    /*
    if (b > a)
    {
        printf("b is greater than a");
    }
    if (b == a)
    {
        printf("b and a are equal");
    } */
}

