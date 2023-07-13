// BinSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n)
{
    int low = 0, high = 0, mid = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else /* found match */
            return mid;
    }
    return -1; /* no match */
}

int main()
{
    int array[10] = { -3, 6, 22, 34, 99, 128, 256, 512, 104, 2048 };
    int input = 0, n = 10;
    printf("Enter a digit to search: ");
    scanf_s("%d", &input);
    int pos = binsearch(input, array, n);
    if(pos != -1)
        printf("%d is found in position %d.\n", input, pos);
    else
        printf("%d not found!\n", input);
}

