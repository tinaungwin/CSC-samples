#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#pragma warning(disable : 4996) // warning for unsafe strcpy function (VC++only) 

#define MAXSIZE 1000

char* strduplicate(char*); // Forward declaration

int main()
{
	char source[MAXSIZE];// [] = "The quick brown fox jumps over the Lazy dog.";
	char* dup{}; 		//{} initialise the pointer

	fgets(source, MAXSIZE, stdin);
	dup = strduplicate(source);
	if (dup != NULL) {
		for (unsigned i = 0; i <= strlen(source); i++)
			dup[i] = toupper(dup[i]);
		printf("%s", dup);
		free(dup);
	}
}

// Function that make a duplicate of the passed string.

char* strduplicate(char* s) /* make a duplicate of s */
{
	char* p;
	int  l = strlen(s);
	p = (char*)malloc(l + 1); /* +1 for '\0' */
	if (p != NULL) {
		if (!strcpy_s(p, l + 1, s)) return p;
		else return NULL;
	}
	return p;
}
