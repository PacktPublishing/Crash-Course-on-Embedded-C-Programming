#include <stdio.h>
#include<stdlib.h>
    int main()
    {
        int a=15,b=30;
        printf ("max = %d, min = %d", 
((a+b) + abs(a-b))/2, ((a+b) - abs(a-b)) /2);
        return 0;
    }

