#include<stdio.h>
void print_dummy(void); // function declaration

int mysquare(int j);   // function declaration
void print_square(int i);
void main()
{
    int a, b;
    printf("Please enter a number");
    print_dummy();
    scanf("%d", &a);
    //b = mysquare(a);
    //print_dummy();
    //printf("Square of %d is %d", a,b);
    print_square(a);
}

void print_square(int i)
{
    int k;
    printf("\nPrint result here\n");
    print_dummy();
    k = i * i;
    printf("\nSquare of %d is %d\n", i, k);
}

int mysquare(int j)
{
    int x;
    x = j * j;
    return x;
}

void print_dummy(void)  // function definition
{
    printf("\n****************************************\n");
}

