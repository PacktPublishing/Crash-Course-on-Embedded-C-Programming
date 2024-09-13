#include<stdio.h>
// multiplication and division
void addmul(int *p, int *q, int *r, int *s);
void main()
{
    int a, b,c,d;
    a = 100;
    b = 10;
    addmul(&a, &b, &c, &d); // address of variables
    printf("\nThe multiplication of %d and %d = %d\n", a,b,c);
    printf("\nThe division of %d and %d = %d\n", a,b,d);
}

// p = &a
// q = &b
// r = &c
// s = &d

void addmul(int *p, int *q, int *r, int *s)
{
    *r = *p * *q;   // c = a * b
    *s = *p / *q;   // d = a / b
    // not returning anything directly
    // but returning value, by placing in pointer
}


// try doing the same thing
// scan 4 numbers and pass 5 pointers to the function
// 4 pointer for value, one pointer for largest number
// try to find the largest number

