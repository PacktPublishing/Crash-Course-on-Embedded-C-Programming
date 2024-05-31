/*
scan an array of 10 numbers, lets call it 'main'

now the odd numbers of this array should be added to a new array
lets call it 'odd'

and even numbers to be added to another array, 'even'
*/
#include<stdio.h>
void main()
{
    unsigned int main[10], even[10], odd[10];
    int i,j;
    int k= 0;
    int m = 0;
    printf("\nPlease enter 10 numbers one by one\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d",&main[i]);
    }
    printf("\nScanning done\n");

    for(i = 0; i < 10; i++)
    {
        if( (main[i] % 2) == 0)// it means its an even number
        {
            even[k] = main[i];
            k = k + 1;
        }
        else
        {
            odd[m] = main[i];
            m++;
        }
    }
    printf("\nSorting is done\n");

    printf("\nEven Array is\n");
    for(i = 0; i < k; i++)
    {
        printf(" %d ", even[i]);
    }

    printf("\nOdd Array is\n");
    for(i = 0; i < m; i++)
    {
        printf(" %d ", odd[i]);
    }


}
