/* shellsort: sort v[0]...v[n-1] into increasing order */
#include <stdio.h>

void shellsort(int v[], int n)
{
    int gap, i, j, temp;
    for (gap = n / 2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
}

int main() {
    int i{};
    int array[] = { 8,3,9,1,2,4,6,5 };
    int size = sizeof(array) / 4;
    
    shellsort(array, size);
    
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}