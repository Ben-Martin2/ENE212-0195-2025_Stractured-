#include <stdio.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int count = 0;       /* Number of stored samples, up to BUFFER_SIZE */
int next = 0;        /* Index where the next sample will be stored */

void insertSample(int value)
{
    buffer[next] = value;
    next = (next + 1) % BUFFER_SIZE;

    if (count < BUFFER_SIZE) {
        count++;
    }
}

void printSamples(void)
{
    int oldest;

    if (count == 0) {
        printf("No samples stored.\n");
        return;
    }

    /* Before the buffer fills, samples start at index 0.
       Once full, next points to the oldest sample. */
    if (count < BUFFER_SIZE) {
        oldest = 0;
    } else {
        oldest = next;
    }

    printf("Samples (oldest to newest): ");
    for (int i = 0; i < count; i++) {
        int index = (oldest + i) % BUFFER_SIZE;
        printf("%d ", buffer[index]);
    }
    printf("\n");
}

int main(void)
{
    int value;

    printf("Enter integer readings:\n");

    while (scanf("%d", &value) == 1) {
        insertSample(value);
        printSamples();
    }

    return 0;
}
