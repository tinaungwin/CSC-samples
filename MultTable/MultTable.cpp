// MultTable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    int i=0, j = 0;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++)
            printf("%4d", i * j);
        printf("\n");
    }
}
