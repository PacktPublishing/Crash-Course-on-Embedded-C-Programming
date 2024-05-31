#include<stdio.h>
void addition(void);

int a, b, myresult;

void main()
{

    printf("\nEnter 2 values for addition\n");
    scanf("%d", &a);
    scanf("%d", &b);
    addition();
    printf("Addition of %d and %d = %d", a, b, myresult);
}
void addition(void)
{
    myresult = a + b;
}
