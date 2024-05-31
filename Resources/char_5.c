#include<stdio.h>
void main()
{
    int i;
    char my[20];

    for(i = 0; i < 10; i++)
    {
        scanf("%c", &my[i]);
    }
    //my[i+1] = 0;
    printf("\nLets print it\n");
    printf("%s\n", my);
}
