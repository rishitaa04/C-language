#include <stdio.h>
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}
int main()
{
    int n;
    printf("Enter n numbers : ");
    scanf("%d", &n);
    printf("%d", sum(n));
}