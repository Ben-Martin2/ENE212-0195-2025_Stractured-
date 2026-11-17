#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3] = {2,5,8};

    int sum = 0;

    int i;

    for(i = 0; i < 3; i++){
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}
