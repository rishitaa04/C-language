#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the first number : ");
    scanf("%d", &a);

    printf("Enter the second number : ");
    scanf("%d", &b);

    int remainder;

    int q = a / b;

    remainder = a - (b * q); // Divisor * Quotient + Remainder = Dividend

    printf("The remainder is : %d when %d is divided by %d", remainder, a, b);

    return 0;
}