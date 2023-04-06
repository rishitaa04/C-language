#include <stdio.h>
int main()
{
    int number;
    int i;
    printf("Enter your number : ");
    scanf("%d", &number);
    int product = 1;
    for (int i = 1; i <= number; i++)
    {
        product *= i;
    }
    printf("Factorial of %d is : %d", number, product);
    return 0;
}