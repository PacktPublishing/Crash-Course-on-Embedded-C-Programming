#include <stdio.h>
#include <string.h>

// Returns true if s1 is substring of s2
int isSubstring(char *s1, char *s2)
{
    int M = strlen(s1);
    int N = strlen(s2);
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) 
    {
        int j;
        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}
int main()
{
    char *s1 = "possible\0";
    char *s2 = "impossible\0";
    int res = isSubstring(s1, s2);
    if (res == -1)
        printf( "Not present\n");
    else
        printf("Present at index %d", res);
    return 0;
}

