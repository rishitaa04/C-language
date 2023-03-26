#include <stdio.h>
int multiply(int n, int a)
{
    if (n == 0)
    {
        return 1;
    }
    return n * (n <= a);
}
int main()
{
    int n;
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("%d %d", multiply(n, a));
}
