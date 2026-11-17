#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3] = {2,5,7};

    int i;

    printf("Forward: ");
    for(i = 0; i < 3; i++) {
        printf("%d",arr[i]);
    }

    printf(" \n");

    printf("Reverse: ");
    for(i = 2; i>= 0; i--){
        printf("%d",arr[i]);
    }


    return 0;
}
