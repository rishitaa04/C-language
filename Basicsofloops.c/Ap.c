// A.P upto n terms i.e. 1,3,5,7,9,....................n

// A.P = a + (n-1)*d

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i = i + 2)
    {
        printf("%d", i);
    }
    return 0;
}