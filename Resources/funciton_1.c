#include<stdio.h>
void print_dummy(void); // function declaration

void main()
{
    int a, b,c;
    a = 23;
    b = 234;
    c = a + b;
    printf("The value of a = %d\n",a);
    print_dummy();
    printf("The value of b = %d\n",b);
    print_dummy();
    printf("The value of addition = %d\n",c);
    print_dummy();
}

void print_dummy(void)  // function definition
{
    printf("\n****************************************\n");
}

