// Sum of digits of a given number

#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter any number : ");
    scanf("%d", &n);

    int last = 0;
    while (n != 0)
    {
        last = n % 10;
        sum = sum + last;
        n = n / 10;
    }
    printf("The sum of last digit is : %d ", sum);
    return 0;
}