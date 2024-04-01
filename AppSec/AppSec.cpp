
#include <stdio.h>

void update_array_data(char* buf) {
	int i;
	for (i = 1; i <= 1024; i++)
		buf[i]++;
}

int main()
{
	char buffer[1024];
	int i;
	/* Initialize the buffer */
	for (i = 1; i <= 1024; i++)
		buffer[i] = 0xFF;
	update_array_data(buffer);
	/* print the last element */
	printf("The last element is % d\n", buffer[1024]);
	return 0;
}
