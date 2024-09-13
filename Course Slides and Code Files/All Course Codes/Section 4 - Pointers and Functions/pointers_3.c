#include<stdio.h>
void main()
{
    int a;
    int *b;

    a = 99;
    b = &a;     //address is 6422036

    //printf("\n%d\n",   &(*(&(*b))) );

    printf("\n%d\n", *b);
}
