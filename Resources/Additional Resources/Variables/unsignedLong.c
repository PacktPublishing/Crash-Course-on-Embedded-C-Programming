#include<stdio.h>
#include<stdlib.h>
	int main ()
	{
		char buffer[123];
		unsigned long ul;
		printf ("\nInput an unsigned number: ");
		fgets (buffer,123,stdin);

		ul = strtoul (buffer,NULL,0);
		printf ("Output: %lu\n\n",ul);
		return 0;
	}

