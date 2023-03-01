#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter the first number : ");

    scanf("%d", &a);

    printf("Enter the second number : ");

    scanf("%d", &b);

    printf("Enter the third number : ");

    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("A is greater");
    }
    if (b > a && b > c)
    {
        printf("B is greater");
    }
    if (c > a && c > b)
    {
        printf("C is greater");
    }
    if (a == b == c)
    {
        printf("All are equal");
    }
    else
    {
        printf("None");
    }
    return 0;
}