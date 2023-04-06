#include <stdio.h>
int main()
{
    int n, sum = 0, first, last;
    printf("Enter any number : ");
    scanf("%d", &n);
    last = n % 10;
    first = n;
    while (n >= 10)
    {
        n = n / 10;
    }
    first = n;
    sum = last + first;
    printf("Sum of 1st and last digit is %d", sum);
    return 0;
}