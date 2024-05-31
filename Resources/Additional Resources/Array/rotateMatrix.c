// C program for left
// rotation of matrix by 90 degree without using extra space

#include<stdio.h>
#include<string.h>

#define R 4
#define C 4
// This function swaps 2 values
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
} 
// After transpose we swap elements of column
// one by one for finding left
// rotation of matrix by 90 degree
void reverseColumns(int arr[R][C])
{
    for (int i = 0; i < C; i++)
        for (int j = 0, k = C - 1;
            j < k; j++, k--)
            swap(&arr[j][i], &arr[k][i]);
}

// Function for do transpose of matrix
void transpose(int arr[R][C])
{
    for (int i = 0; i < R; i++)
        for (int j = i; j < C; j++)
            swap(&arr[i][j], &arr[j][i]);
}
// Function to anticlockwise rotate matrix by 90 degree
void rotate90(int arr[R][C])
{
    transpose(arr);
    reverseColumns(arr);
}
// Function for print matrix
void printMatrix(int arr[R][C])
{
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }
}

// Driven code
int main(void)
{
    int arr[R][C] = { { 1, 2, 3, 4 },
                    { 5, 6, 7, 8 },
                    { 9, 10, 11, 12 },
                    { 13, 14, 15, 16 } };
    printMatrix(arr);
    printf("After Rotation...\n");
    rotate90(arr);
    printMatrix(arr);
    return 0;
}
