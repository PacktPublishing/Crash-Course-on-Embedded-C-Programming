#include<stdio.h>
#include<stdlib.h>

int main()
{
char *a = "this is good";
char *b = "this is good";
int cmp;

while(*a == *b && *a != '\0' && *b != '\0')
{
        cmp = 0;
        a++;
        b++;
}
if(*a == '\0' && *b == '\0' && cmp ==0)
{
        printf("equal\n");
}
else
{
        printf("not equal\n");
}

}

