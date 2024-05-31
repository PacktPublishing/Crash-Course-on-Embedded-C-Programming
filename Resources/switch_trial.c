#include<stdio.h>
void main()
{
    int a1, a2;
    int result;
    char op1;
    printf("Enter first number\n");
    scanf("%d", &a1);
    printf("\nEnter second number\n");
    scanf("%d", &a2);
    printf("Enter the expected operation + - / *\n");

    scanf(" %c", &op1);

    switch(op1)
    {
    case '+':
        result = a1 + a2;
        printf("\nAddition of %d and %d = %d\n",a1,a2,result);
        break;
    case '-':
        result = a1 - a2;
        printf("\nSubtraction of %d and %d = %d\n",a1,a2,result);
        break;

    case '*':
        result = a1 * a2;
        printf("\nMultiplication of %d and %d = %d\n",a1,a2,result);
        break;

    case '/':
        result = a1 / a2;
        printf("\nDivision of %d / %d = %d\n",a1,a2,result);
        break;

    default:
        printf("\nInvalid operator entered\n");
        break;
    }
}
