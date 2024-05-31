C Code:
// C program to find the length of the longest substring
// without repeating characters

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NO_OF_CHARS 256

int max(int a, int b){return (a>b?a:b);}

int longestUniqueSubstr(char * str)
{
    int n = strlen(str);
    int res = 0; // result
    int lastIndex[NO_OF_CHARS];
    // last index of all characters is initialized
    // as -1
    for (int k=0; k <255; k++)
    {
        lastIndex[k] = -1;
    }
    // Initialize start of current window
    int i = 0;
    // Move end of current window
    for (int j = 0; j < n; j++) 
    {
        // Find the last index of str[j]
        // Update i (starting index of current window)
        // as maximum of current value of i and last
        // index plus 1
        i = max(i, lastIndex[str[j]] + 1);
        // Update result if we get a larger window
        res = max(res, j - i + 1);
        // Update last index of j.
        lastIndex[str[j]] = j;
    }
    return res;
}
// Driver code
int main()
{
    char *str1 = "abcabcbb\0";
    char *str2 = "bbbb\0";
    char *str3 = "pwwkew\0";
    
    printf(" The input string is %s\n ",str1);
    printf(" The length of the longest non-repeating character substring is %d\n",longestUniqueSubstr(str1));
    printf(" The input string is %s\n ",str2);
    printf(" The length of the longest non-repeating character substring is %d\n",longestUniqueSubstr(str2));
    printf(" The input string is %s\n ",str3);
    printf(" The length of the longest non-repeating character substring is %d\n",longestUniqueSubstr(str3));
    return 0;
}
