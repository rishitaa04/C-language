#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int new (len);
    for (int i = 0; i < len; i++;)
    {
        new[i] = arr[i];
    }
    printf("elements of original array is : \n");
    for (int i = 0; i < len; i++;)
    {
        printf("%d", arr[i]);
    }
    printf("elements of new array is : ");
    for (int i = 0, i < len, i++;)
    {
        printf("%d", new[i]);
    }
    return 0;
}