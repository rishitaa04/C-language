#include <stdio.h>
int multiply(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * (n - 1);
}
int main()
{
    int n;
    printf("Enter any number :  ");
    scanf("%d", &n);
    return 0;
}
