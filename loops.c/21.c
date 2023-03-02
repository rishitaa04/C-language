// WAP TO COUNT THE NUMBER OF DIGITS OF A GIVEN NUMBER

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("The no of digits present in the given number is : %d ", count);
    return 0;
}
