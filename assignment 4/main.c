#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[3] = {45, 25, 21};
    int i;
    int max = arr[0];
    int min = arr[0];

    for (i = 1; i < 3; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
