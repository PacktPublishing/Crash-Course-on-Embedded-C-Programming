// C program to find position of a character
// in a given string.
#include<stdio.h>
#include<stdlib.h>

int main ()
    {
        
        char str[] = "My name is Anu";
        char* ch = strchr(str, 'a');
        printf("%d", ch - str + 1);
    return 0;
}

