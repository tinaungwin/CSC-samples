#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct customer {
    char name[20];
    int  orderid;
};

int main(void) {
    struct customer c = { {}, {} }; // initialize c with a default values
    int result;
    /*
    scanf_s reads formatted data from the standard input stream securely.
    Each argument must be a pointer to a variable type that corresponds to
    the type specifier in format. It returns non-zero if successful.
    */
    printf("Enter order number: ");
    result = scanf_s("%d", &c.orderid); // Entry should be numeric
    if (!result) return 0;

    printf("Enter customer's name: ");
    result = scanf_s("%19s", c.name, sizeof(c.name));
    if (!result) return 0;

    printf("Order number:%d\tName: %s\n", c.orderid, c.name);
}
