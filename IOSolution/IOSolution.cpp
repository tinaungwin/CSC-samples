#include <stdio.h>
#include <string.h>

struct customer {
    char name[20];
    int  orderid;
};

int main(void) {
    struct customer c;
    int result = 0, n = 0;
    // scanf_s reads formatted data from the standard input stream securely.
    // It returns non-zero if success.
    printf("Enter order number ");
    result = scanf_s("%d", &c.orderid); 	// reads data from stream
    if (!result) return 0; 		// It returns non-zero if successful.

    printf("Enter user name: ");
    result = scanf_s("%19s", c.name, sizeof c.name);
    if (!result) return 0;

    n = strlen(c.name) - 1;		// strlen compute the length of the string
    if (c.name[n] == '\n') c.name[n] = '\0';	// Terminate a string with ‘\0’
        //write data to stream
        printf("Information of the user is\n Name:\t %s\n Order number:\t %d\n", c.name, c.orderid);
}
