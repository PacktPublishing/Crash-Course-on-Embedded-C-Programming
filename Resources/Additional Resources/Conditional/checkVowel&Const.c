/*C program to check vowel or consonant using switch case*/
#include <stdio.h>

int main()
{
    char ch;
    /* Input an alphabet from user */
    printf("Enter any alphabet: ");
    scanf("%c", &ch);
    /* Switch value of ch */
    switch(ch)
    {
        case 'a':
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u': 
        case 'A': 
        case 'E': 
        case 'I': 
        case 'O': 
        case 'U': 
            printf("Vowel");
            break;
        default: 
            printf("Consonant");
    }

    return 0;
}
