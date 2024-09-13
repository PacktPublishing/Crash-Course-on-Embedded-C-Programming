#include<stdio.h> // may not be available in embedded compilers
#include<string.h>  // is always available in embedded compilers

void main()
{
    char a[20];
    printf("\nEnter a text string\n");
    scanf("%s", &a);
    printf("\nLets print this string now\n");
    printf("%s\n",a);
}
