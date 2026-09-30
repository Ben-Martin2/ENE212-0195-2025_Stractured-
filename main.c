#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2;

    printf("Provide two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("number1: %.1lf\n", num1);
    printf("number2: %.1lf\n", num2);

    printf("operations\n");

    printf("Sum: %.1lf\n", num1 + num2);
    printf("Difference: %.1lf\n", num1 - num2);
    printf("Product: %.1lf\n", num1 * num2);
    printf("Division: %.1lf\n", num1 / num2);

    return 0;
}
