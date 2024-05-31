#include<stdio.h>
void main()
{
    unsigned int a[10] = {101, 51, 71, 99, 85, 76};

    printf("\n-------------------------\n");

    //printf("%d", a[3]);

    a[0] = a[1] + a[3];
    printf("Addition of %d + %d = %d", a[1], a[3], a[0]);
    printf("\n-------------------------\n");
}
