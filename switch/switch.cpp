#include <stdio.h>

int main() /* count white spaces and others */
{
    int c = 0, i = 0, nwhite = 0, others = 0;
    while ((c = getchar()) != EOF) {
        switch (c) {
            case ' ':		// space
            case '\n':		// return+line feed
                case '\t':		// tab
                    nwhite++;
                    break;
                default:
                    others++;
                    break;
        }
    }
    printf("white space = % d, others = % d\n", nwhite, others);
    return 0;
}
