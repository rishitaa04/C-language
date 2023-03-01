#include <stdio.h>
int main()
{
    int a;
    
    int b;

    printf("Enter the first number : ");

    scanf("%d", &a);

    printf("Enter the second number : ");

    scanf("%d", &b);

    if (a > b)
    {
        printf("a is greater");
    }
    if (b > a)
    {
        printf("b is greater");
    }
    if (a == b)
    {
        printf("Both are equal");
    }

    return 0;
}