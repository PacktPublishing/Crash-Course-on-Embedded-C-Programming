#include<stdio.h>

void print_it(char my[] );
void print_that(char my[] );
void print_this(char *txt );

void main()
{
    char val[] = {'a', 'b', 'c', 'x', 'y', 'z'};
    char mytxt[20] = "Welcome to this";
    //print_it(val);
    //print_this(mytxt);
    print_that(mytxt);

}

void print_this(char *txt )
{
    /*
    txt is now pointer to mytxt which consists of "Welcome to this"
    *txt will hold the first value of this array = 'W'
    if I manually do txt+1, the pointer will increment and then it'll point
        to the next value in array which is = 'E'
    the last character in any text string is 0
    so if we check the *txt untill it becomes 0, then we can run  a while loop
    */
    while (*txt)    // while *txt is non zero
    {
        putchar(*txt); // print the current value pointed by pointer
        txt++;  // increment the pointer
    }
    putchar('\n');
}

void print_that(char my[] )
{
    while (*my)    // while *txt is non zero
    {
        putchar(*my); // print the current value pointed by pointer
        my++;  // increment the pointer
    }
    putchar('\n');
}

void print_it(char my[] )
{
    int i;
    for(i = 0; i < 6; i++)
    {
        printf("\nChar array element = %c\n", my[i]);
    }
}
