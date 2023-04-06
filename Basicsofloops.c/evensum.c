#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter any number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("Sum is : %d", sum);
    return 0;
}