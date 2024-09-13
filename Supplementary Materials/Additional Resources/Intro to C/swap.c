
// A C program to sort an array with 0, 1 and 2
// Doing in one pass needs two flags pointer, one left one right.

#include <stdio.h>
#include <stdbool.h>

void sortColors(int* nums, int numsSize)
{
    int redSt=0, bluSt=numsSize-1;
    int i=0;
        while(i<bluSt+1)
        {
            if(nums[i]==0)
            {
                int tmp = nums[i];
                nums[i] = nums[redSt];
                nums[redSt] = tmp;
                redSt++;
                i++;
                continue;
            }
            if(nums[i] ==2){
                int tmp = nums[i];
                nums[i] = nums[bluSt];
                nums[bluSt] = tmp;
                bluSt--;
                continue;
            }
            i++;
        }
    }
//Utility function to print the contents of an array
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d",arr[i]);
}




// Driver program to test above functions
int main()
{
   int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(int);
    sortColors(arr,n);
    // Print the sorted array
    printArr(arr, n); 
    
    return 0;
}


