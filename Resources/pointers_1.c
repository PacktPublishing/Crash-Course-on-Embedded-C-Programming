#include<stdio.h>
void main()
{
    int a;  // variable declaration
    int *b; // pointer declaration

    a = 232;
    b = &a;     // here we're copying the address of a into b

    // print b, it'll be some weird number which we don't understand
    // why? because its a physical address

    printf("\nAddress of a is %d\n", b);

    printf("\Value pointed by b is %d\n", *b);

    printf("\nValue of a = %d\n", a);

    *b = 989;

    printf("\nValue of a = %d\n", a);

}
