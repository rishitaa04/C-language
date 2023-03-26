#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("It's a postitive number ");
    }
    if (a < 0)
    {
        printf("It's a negative number ");
    }
    if (a == 0)
    {
        printf("It's Zero ");
    }
    return 0;
}