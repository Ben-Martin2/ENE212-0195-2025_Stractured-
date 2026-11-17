#include <stdio.h>

int main(void)
{
    int arr[5] = {1, 8, 7, 10}; /* room for one extra value */
    int size = 4;
    int value = 5;
    int position = 2;           /* positions start at 1 */
    int i;

    printf("Current array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    /* Shift elements right to make room */
    for (i = size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = value;
    size++;

    printf("\nAfter insertion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
