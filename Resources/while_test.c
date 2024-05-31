#include<stdio.h>

void main()
{
    int i;
    /*
    init, condition, increment/dec
    for(i = 0; i < 5; i++)
    {
        printf("\nRepeat this, i = %d\n",i);
    }*/


    i = 0;  // initialization
    while(i < 10)       // condition
    {
        printf("\nThis is my execution, i = %d\n",i);
        i++;        // inc/dec
    }

    i = 50;
    do
    {
        printf("\nThis is my execution, i = %d\n",i);
        i++;
    }while(i < 10);


}
