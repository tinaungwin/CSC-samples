// find all lines matching pattern from input from commandline.
// press control+z to stop.

#include <stdio.h>

// maximum input line length

#define MAXLINE 1000 

int getline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould"; /* pattern to search for */


/* strindex: return index of t in s, -1 if none */

int strindex(char s[], char t[])
{
    int i, j, k;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}

/* getline: get line into s, return length */

int getline(char s[], int lim)
{
    int c, i;
        i = 0;
        while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
            s[i++] = c;
    if (c == '\n')
        s[i++] = c;
        s[i] = '\0';
        return i;
}


int main()
{
    char line[MAXLINE];
    int found = 0, index=0;
    printf("Search patter: %s\n", pattern);
    while (getline(line, MAXLINE) > 0)
        if ((index = strindex(line, pattern)) >= 0) {
            printf("found at %d: %s", index, line);
            found++;
        }
        else
            printf("Not found.\n");
    printf("Number of found: %d\n", found);
    return found;
}
