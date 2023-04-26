#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int pro = 1;
    int i;
    for (i = 2; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            pro *= i;
        }
    }
    printf("The even multiplication is : %d \n", pro);
    return 0;
}