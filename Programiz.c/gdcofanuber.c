#include <stdio.h>
int main()
{
    int first, second, i, gcd;
    printf("Enter the first number : ");
    scanf("%d", &first);
    printf("Enter the second number : ");
    scanf("%d", &second);

    for (i = 1; i < first && i < second; i++)
    {
        if (first % i == 0 && second % i == 0)
            gcd = i;
    }
    printf("The gcd of a number %d and %d is : %d", first, second, gcd);

    return 0;
}