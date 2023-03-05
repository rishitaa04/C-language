#include <stdio.h>
int main()
{
    float a;
    float b;

    printf("Enter first number : ");
    scanf("%f", &a);

    printf("Enter second number : ");
    scanf("%f", &b);

    float sum = a + b;

    printf("The sum of given two numbers is : %f ", sum);
}