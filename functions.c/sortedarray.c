#include <stdio.h>
int sorted(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    if (arr[0] > arr[1])
    {
        return 0;
    }
    int sort = sorted(arr + 1, n - 1);
    return sort;
}
int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", sorted(arr, n));
}