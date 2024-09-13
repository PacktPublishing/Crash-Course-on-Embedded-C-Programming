#include<stdio.h>

int smallest(int a1, int a2, int a3, int a4, int a5, int a6);
int largest(int a1, int a2, int a3, int a4, int a5, int a6);

void main()
{
    int a,b,c,d,e,f, large, small;
    //write a code to scan 6 numbers
    int i;
    printf("Enter 6 numbers one by one\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);

    // next code will be
    large = largest(a,b,c,d,e,f);
    small = smallest(a,b,c,d,e,f);
    printf("\nLargest number is %d\n", large);
    printf("\nSmallest number is %d\n", small);
}

int smallest(int a1, int a2, int a3, int a4, int a5, int a6)
{
    int s;
    s = a1;
    if (s > a1) s = a1;
    if (s > a2) s = a2;
    if (s > a3) s = a3;
    if (s > a4) s = a4;
    if (s > a5) s = a5;
    if (s > a6) s = a6;
}
int largest(int a1, int a2, int a3, int a4, int a5, int a6)
{
    int s;
    s = a1;
    if (s < a1) s = a1;
    if (s < a2) s = a2;
    if (s < a3) s = a3;
    if (s < a4) s = a4;
    if (s < a5) s = a5;
    if (s < a6) s = a6;
}
