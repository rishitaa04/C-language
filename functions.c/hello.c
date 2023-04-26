#include <stdio.h>
void printHw(int n);
int main()
{
    int n;
    printf("Enter the number of times : ");
    scanf("%d", &n);
    printHw(n);
    return 0;
}
void printHw(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("Hello world \n");
    printHw(n - 1);
}