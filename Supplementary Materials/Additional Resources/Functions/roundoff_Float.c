/* Program for rounding floating point numbers */
# include<stdio.h>

int roundNo(float num)
{
    return num < 0 ? num - 0.5 : num + 0.5;
}

int main()
{
    printf("%d", roundNo(-1.777));
    getchar();
    return 0;
}

