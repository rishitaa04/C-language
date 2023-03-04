#include <stdio.h>
int main()
{
    int n;
    int a[n], i, key, count = 0;
    printf("Enter integer number \n ", n);
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("%d", key, i + 1);
            count++;
        }
    }
    printf("%d has appeared at position %d times in an array", key, count);

    return 0;
}