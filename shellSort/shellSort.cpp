/* shellsort: sort v[0]...v[n-1] into increasing order */
#include <stdio.h>

void print_changes(int pos1, int pos2, int v[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
    printf("%d( %d ) <-> %d( %d )\n", pos1, v[pos1], pos2, v[pos2]);
}


void shellsort(int v[], int n)
{
    int gap{}, i{}, j{}, temp{};
    for (gap = n / 2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) 
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                print_changes(j, j + gap, v, n);
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;                
            }
        printf("-------------\n");
    }
}

int main() {
    int i{};
    int array[] = { 10, 8, 3, 9, 1, 2, 4, 6, 5, 11 };
    int size = sizeof(array) / 4;
    
    shellsort(array, size);
    
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}