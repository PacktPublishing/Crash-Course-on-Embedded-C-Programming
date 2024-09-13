//solution 1

// reverse of the string
#include<stdio.h>
#include<string.h>
int main()
{
   char str[100];
   printf("Enter string: ");
   fgets(str, sizeof(str), stdin);
   strrev(str);
   printf("The reverse of the string is: ");
   puts(str);

   return 0;
}
// solution 2
#include<stdio.h>
int main()
{
   char str[100];
   int i, j, temp;
   printf("Enter a string: ");
   scanf("%[^\n]",str);

   // finding length of string
   for(i=0; str[i]!='\0'; i++);

   // reverse
   for(i--, j=0; j<i/2; j++, i--)
   {
     temp=str[i];
     str[i]=str[j];
     str[j]=temp;
   }

   printf("The reverse of the string: %s",str);

   return 0;
}

