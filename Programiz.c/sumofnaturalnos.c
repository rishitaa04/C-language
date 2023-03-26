#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    int sum = 0;
    for (int i = 1; i <= a;)
    {
        sum += i;
        i++;
    }
    printf("The sum of n natural no.s is : %d", sum);
    return 0;
}