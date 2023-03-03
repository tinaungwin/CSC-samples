#include <stdio.h>
/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
int main()
{
    int lower = 0; /* lower limit of temperature scale */
    int upper = 300; /* upper limit */
    int step = 20; // step size
    int fahr = 0, celsius = 0;

    fahr = lower;
    printf("F\tC\n");
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t %d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
