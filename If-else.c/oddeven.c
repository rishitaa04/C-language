#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number : ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("It's an even number ");
    }
    if (a % 2 != 0)
    {
        printf("Not an even number ");
    }
    return 0;
}