#include <stdio.h>
int main()
{
    int n, rem;
    printf("Enter the digits of a number : ");
    scanf("%d", &n);
    int sum = 0;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("The sum of digits is : %d", sum);
    return 0;
}