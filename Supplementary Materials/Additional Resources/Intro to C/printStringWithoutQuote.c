// C program to print a string without
// quote in the program
#include <stdio.h>
#define get(x) #x
int main()
{
    printf(get(Happy Learning));
    return 0;
}

