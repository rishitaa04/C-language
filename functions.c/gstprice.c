#include <stdio.h>

void calculatePrice(float value);

int main()
{
    float value;
    printf("Enter the price : ");
    scanf("%f", &value);

    calculatePrice(value);

    return 0;
}
void calculatePrice(float value)
{
    value = value + (0.18 * value);
    printf("Final price is : %f", value);
}