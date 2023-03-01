#include <stdio.h>
int main()
{
    int a, minus;

    printf("Enter the number: ");

    scanf("%d", &a);

    minus = --a;

    printf("Uniary minus is : %d", a);

    return 0;
}