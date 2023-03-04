#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct customer {
    char name[20];
    int  orderid;
};

int main(void) {
    struct customer c = { {}, {} }; // initialize c with a default values
    int result, n;
    /*
    scanf_s reads formatted data from the standard input stream securely.
    Each argument must be a pointer to a variable type that corresponds to
    the type specifier in format. It returns non-zero if successful.
    */
    printf("Enter order number: ");
    result = scanf_s("%d", &c.orderid); // Entry should be numeric
    if (!result) return 0;

    printf("Enter user name: ");
    result = scanf_s("%19s", c.name, _countof(c.name));
    if (!result) return 0;

    n = strlen(c.name) - 1;
    if (c.name[n] == '\n')
        c.name[n] = '\0';
    printf("Information of the user is - Name %s, Order number %d\n",
        c.name, c.orderid);
}
