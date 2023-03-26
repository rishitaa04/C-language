#include <stdio.h>
int main()
{
    int a;
    int i;
    int j;
    printf("Enter a number : ");
    scanf("%d", &a);
    for (i = 1; i <= 10; i++)
    {
        // printf("  %d \n", a * i);
        printf("%d * %d = %d\n", a, i, a * i);
    }

    return 0;
}
