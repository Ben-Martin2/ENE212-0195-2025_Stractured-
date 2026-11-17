#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[4] = {3,2,2,5};

    int i;
    int j;
    int count;

    printf("Unique elements: ");

    for (i = 0; i < 4; i++) {
        count = 0;

        for (j = 0; j < 4; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
