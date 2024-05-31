#include<stdio.h>
void muldiv(void);

int a, b, mymul, mydiv;

void main()
{

    printf("\nEnter 2 values for Multiplication and division\n");
    scanf("%d", &a);
    scanf("%d", &b);
    muldiv();
    printf("Multiplication of %d and %d = %d", a, b, mymul);
    printf("Division of %d and %d = %d", a, b, mydiv);
}
void muldiv(void)
{
    mymul = a * b;
    mydiv = a / b;
}

