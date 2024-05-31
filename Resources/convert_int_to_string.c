#include<stdio.h>
void main()
{
    int a;
    float b;
    char my[20];
    b = 31.296;
    a = 71;

    sprintf(my, "H: %d, T:%1.2f",a, b);
    puts(my);
}
