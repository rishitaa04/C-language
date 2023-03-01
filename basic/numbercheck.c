#include <stdio.h>
int main()
{
    int a;
    printf(" Enter the given number : ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf(" It's a positive number ");
    }
    else if (a < 0)
    {
        printf("It's a negative number ");
    }
    else
    {
        printf(" You entered zero ");
    }
    return 0;
}