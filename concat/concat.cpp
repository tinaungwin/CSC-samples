/* Concatenate files */
#include <stdio.h>

void filecopy(FILE*, FILE*); /* Function declaration */

int main(int argc, char* argv[])
{
	FILE* fp;
	if (argc == 1) /* no args; copy standard input */
		filecopy(stdin, stdout);
	else
		while (--argc > 0)
			if ((fopen_s(&fp, *++argv, "r")) != 0) {
				printf("cat: can't open %s\n", *argv);
				return 1;
			}
			else {
				filecopy(fp, stdout);
				fclose(fp);
			}
	return 0;
}

/* filecopy: copy file ifp to file ofp - Function definition*/
void filecopy(FILE* ifp, FILE* ofp)
{
	int c;
	while ((c = getc(ifp)) != EOF)
		putc(c, ofp);
}
