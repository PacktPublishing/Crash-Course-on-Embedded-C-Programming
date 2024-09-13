#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    printf("\nPlease enter a text string\n");
    scanf("%s", &a);

    if(strcmp(a, "time") == 0)
    {
        printf("\nYou've entered time\n");
    }
    else if(strcmp(a, "machine") == 0)
    {
        printf("\nYou've entered machine\n");
    }

    else
    {
        printf("\nYou entered something else\n");
    }
}
