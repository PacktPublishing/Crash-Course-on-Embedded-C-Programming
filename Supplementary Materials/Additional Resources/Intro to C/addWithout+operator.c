#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{   
        int x,y;
        printf("Enter two numbers:\n");
        scanf("%d%d",&x,&y);
        int sum = -(-x-y); // -(-x-y)= x+y, simple mathematics trick
        printf("\nSum is: %d",sum);
   
 return 0;
}
