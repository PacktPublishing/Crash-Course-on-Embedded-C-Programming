#include<stdio.h>
void main()
{
    int a, b, c, d;  // variable declaration
    int *x, *y; // pointer declaration

    a = 584;
    b = 957;

    x = &a;
    y = &b;

    //print the value of b using pointer???
    printf("\nValue of a which is also pointed by x = %d\n",*x);
    printf("\nValue of b which is also pointed by y = %d\n",*y);

    // change value of a to 741 using pointer
    // change value of b = 1045 using pointer
    *x = 741;
    // the value pointed by x should now become 741

    *y = 1045;
    // the value pointed by y should now become 1045
    printf("\n----------------------------------------------------\n");
    printf("\nNew value of a = %d and b = %d\n",a,b);
    printf("\nNew value of a = %d and b = %d\n",*x,*y);

}
