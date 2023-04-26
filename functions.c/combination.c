#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int r;
    printf("Enter r : ");
    scanf("%d", &r);
    int nfact = 1;
    int rfact = 1;
    int nrfact = 1;

    for (int i = 2; i <= n; i++)
    {
        nfact = nfact * i;
    }
    // printf("%d ", nfact);
    //   printf("\n");

    for (int i = 2; i <= n; i++)
    {
        rfact = rfact * i;
    }

    // printf("%d ", rfact);
    // printf("\n");

    for (int i = 2; i <= n - r; i++)
    {
        nrfact = nrfact * i;
    }

    // printf("%d", nrfact);
    // printf("\n");

    int ans = rfact * nrfact;
    int main = nfact / ans;
    printf("%d", main);
    return 0;
}