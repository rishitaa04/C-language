#include <stdio.h>
int main()
{
    int number, rem = 0, reverse, sum = 0;
    printf("Enter your number : ");
    scanf("%d", &number);
    while (number > 0)
    {
        rem = rem * 10;
        rem = rem + (number % 10);
        number = number / 10;
        int ld = rem;
        sum = number + ld;
    }
    printf("reverse is : %d\n", rem);
    printf("sum of number and it's reverse is : %d", sum);
    return 0;
}