#include<stdio.h>
int mul(int p, int q);  // function declaration
void main()
{
    int a,b, result;
    printf("Enter 2 values\n");
    scanf("%d", &a);
    printf("\nEnter other value\n");
    scanf("%d", &b);
    result = mul(a,b);
    printf("\nThe product of %d X %d = %d", a,b,result);
}

int mul(int p, int q)
{
    return p * q;
}
