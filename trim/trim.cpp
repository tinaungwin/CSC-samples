/* trim: remove trailing blanks, tabs, newlines */
#include <stdio.h>
#include <string.h>     

int trim(char s[])
{
	int len = strlen(s);    // get the string length
	int index = 0;
	for (index = len - 1; index >= 0; index--) {
		//if (s[index] != ' ' && s[index] != '\t' && s[index] != '\n')
		//    break;
		if (s[index] == ' ' || s[index] == '\t' || s[index] == '\n')
			continue;
		else
			break;
	}
	s[++index] = '\0';		// Terminate the C string
	return index;
}


int main()
{
    char str[] = {"Hello Wolrd!\t \n"};
    printf("Original string: %s\nOriginal length: %llu\n", str, strlen(str));
    /* Include call to trim function here */
    int timlen = trim(str);
    printf("String after trim and length= %s: %llu\n", str, strlen(str));
    return 0;
}
