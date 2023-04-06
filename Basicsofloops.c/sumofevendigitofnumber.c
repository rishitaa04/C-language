#include <stdio.h>
int main()
{
    int number, sum = 0, ld;
    printf("Enter any number : ");
    scanf("%d", &number);
    while (number != 0)
    {
        if (number % 2 == 0)
        {
            ld = number % 10;
            sum = sum + ld;
            number = number / 10;
        }
    }
    printf("The sum is : %d", sum);
    return 0;
}