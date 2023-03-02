// MULTIPLICATION TABLE

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Multiplication table for the given number is : %d", n);
    for (i = 0; i <= 10; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d * %d = %d \n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}