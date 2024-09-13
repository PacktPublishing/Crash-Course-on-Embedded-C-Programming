#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("\nEnter first number\n");
    scanf("%d", &a);

    printf("\nEnter Second number\n");
    scanf("%d", &b);

    //printf("\nEnter third number\n");
    //scanf("%d", &c);

    printf("\nEnter fourth number\n");
    scanf("%d", &d);
    // a = 50
    // b = 10
    // d = 6

    if( (a > b || a > 100) && a > d)
    {
        printf("we did it");
    }
    else
    {
        printf("we made it false");
    }
}

