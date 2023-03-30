/* trim: remove trailing blanks, tabs, newlines */
#include <stdio.h>
#include <string.h>     

int trim(char s[])
{
    int len = strlen(s);    // get the string length
    int index{};
        for (index = len - 1; index >= 0; index--) {
            if (s[index] != ' ' && s[index] != '\t' && s[index] != '\n')
                break;
            //else i++;
        }
    s[++index] = '\0';		// Terminate the C string
    return index;
}


int main()
{
    char str[] = {"Hello Wolrd!\t \n"}; // { 'H','e','l','l','o',' ','W','o','r','l','d','!','\t',' ','\n','\0' };
    printf("Original string and length: %s: %d\n", str, strlen(str));
    /* Include call to trim function here */
    int timlen = trim(str);
    printf("String after trim and length= %s: %d\n", str, strlen(str));
    return 0;
}
