// Acccept a number from user
// print its table up to 10
// 5
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 10 = 50
#include<stdio.h>
void main()
{
    int a,i,b;
    printf("\nEnter a value to print its table\n");
    scanf("%d", &a);

    for (i = 1; i <= 10; i++)
    {
        b = a * i;
        printf("\n%d X %d = %d\n", a, i, b);
    }
}
