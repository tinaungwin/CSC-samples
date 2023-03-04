#include <stdio.h>
#include <string.h>

/* itoa: convert an integer n to characters in s */
void itoa(int n, char s[])
{
    int i = 0, sign = 0;
    if ((sign = n) < 0) /* record sign */
        n = -n; /* make n positive */
    do { /* generate digits in reverse order */
        s[i++] = n % 10 + '0'; /* get next digit */
    } while ((n /= 10) > 0); /* delete it */
    if (sign < 0)
        s[i++] = '-';
        s[i] = '\0';
        _strrev(s);
}

int main() {
    int n = 94;
    char s[10] = {}; 
    itoa(n, s);
    printf("%s\n",s );
   // printf("char:%d, short:%d, int:%d, long:%d, long long: %d, long double: %d\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long int), sizeof(long double));

    return 0;
}