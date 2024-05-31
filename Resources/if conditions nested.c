#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\nEnter first number\n");
    scanf("%d", &a);

    printf("\nEnter Second number\n");
    scanf("%d", &b);

    printf("\nEnter third number\n");
    scanf("%d", &c);


    if (a > b)
    {
        if (a > c)
        {
            printf("a is largest");
        }
    }

    if (b > a)
    {
        if (b > c)
        {
            printf("b is largest");
        }
    }

    if (c > a)
    {
        if (c > b)
        {
            printf("c is largest");
        }
    }

}

