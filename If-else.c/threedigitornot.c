#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);

    if (num > 99 && num < 1000)
    {
        printf("Three digit");
    }
    else
    {
        printf("Not a 3 digit");
    }
}