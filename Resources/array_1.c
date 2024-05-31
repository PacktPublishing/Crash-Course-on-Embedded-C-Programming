// scan 5 numbers from user and store it in an array
// try to print those number

#include<stdio.h>
void main()
{
    unsigned int a[10];
    unsigned int i;
    printf("\n---------------------------------\n");
    printf("Enter 5 numbers one after another\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n [%d,  %d,  %d,  %d,  %d] \n",a[0], a[1], a[2], a[3], a[4] );

    printf("\n---------------------------------\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
}
