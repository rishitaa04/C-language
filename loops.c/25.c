// Factorial of a given number

// 5! means 5x4x3x2x1

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product = product * i;
    }
    printf("The factorial is : %d", product);
    return 0;
}