#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double PI = 3.142857143;
    double area;
    double radius;

    printf("Provide Radius: ");

   scanf("%lf", &radius);

    area = PI * radius * radius;


    printf("Radius: %lf", radius);
    printf("\nArea: %lf", area);
    return 0;
}
