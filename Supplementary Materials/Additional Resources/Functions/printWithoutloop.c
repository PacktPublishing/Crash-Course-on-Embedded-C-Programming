#include<stdio.h>
#include<stdlib.h>

void printNumbers(int);   
int main ()
    {
        
        int n=1;
        printNumbers(n);
        return 0;
    }

 void printNumbers(int n)
    {
        if(n<=100)
        {
            printf("%d\n", n);
            printNumbers(n+1);
        }
    }
    


