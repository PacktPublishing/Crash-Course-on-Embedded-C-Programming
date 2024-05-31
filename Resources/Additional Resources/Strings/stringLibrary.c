/*************************************************************************
C program for following string library operations
a.    strlen
b.    strcmp
c.    strcpy
d.    strcat
e.    strstr
f.    strchr
*********************************************************************/
#include <stdio.h>
#include <string.h>// for sting operations

int main() {
  char str1[] = "abcd", str2[] = "abCd",ch='b';
  int result;
  char* ret;
 
//a. strlen -- calculate lengths of given string 
//   strlen() function takes a string as an argument and returns its length. 
//   The returned value is of type size_t (the unsigned integer type). 

//   using the %zu format specifier to print size_t
    printf("Length of string a = %zu \n",strlen(str1));
    printf("Length of string b = %zu \n",strlen(str2));

//b. strcmp --compares two strings
// strcmp() function takes two strings as an argument:str1 and str2 
//and returns 0 incase strings are equal and non-zero value
//when strings are not equal 

// comparing strings str1 and str2
  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);
  
//c. strcpy()-----copies a string to another 
//char* strcpy(char* destination, const char* source);
//The strcpy() function copies the string pointed 
//by source (including the null character) to the destination.
//and returns the copied string.

// copying str1 to str2
   strcpy(str2, str1);
   printf("strcpy(str1, str2),copied str1 to str2 = %s\n", str1);
   
//d.strcat()----concatenates(joins) two strings
//char *strcat(char *destination, const char *source)
// The strcat() function concatenates the destination string and 
// the source string, and the result is stored in the destination string.

// concatenates str1 and str2
// the resultant string is stored in str1.
   strcat(str1, str2);
   printf("strcat(str1, str2),resultant string is stored in str1 = %s\n", str1);

//e. strstr ----finds the first occurrence of the sub-string s2 in the string s1
//The strstr() function takes two arguments: str and target. 
//It searches for the first occurrence of target in the string pointed to by str. 
//The terminating null characters are ignored.
//If the substring is found, the strstr() function returns the pointer to the first 
//character of the substring in dest.
//If the substring is not found, a null pointer is returned.
//If dest points to an empty string, str is returned
//char* strstr( char* str, const char* target );

// Find first occurrence of s2 in s1
    printf("strstr operation:\n");
    ret = strstr(str1, str2);
  
    // Prints the result
    if (ret) {
        printf("String found\n");
        printf("First occurrence of string '%s' in '%s' is '%s'", str2, str1, ret);
    } 
    else
        printf("String not found\n");
//f. strchr( )----finds first occurrence of the character in a given string.
// Syntax for strchr( ) function is given below.
//The terminating null byte is considered to be part of the string.
//int strchr(const char *str, int character);
    printf("strchr operation:\n");
    ret = strchr (str2,ch);
    if(ret)
     printf ("Character %c is found at position %ld in string %s\n",ch,ret-str2+1,str2);
    else
      printf ("Character %c not found in string %s\n",ch,str2);
  return 0;
}





