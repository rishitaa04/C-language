#include <stdio.h>

int Sum(int *inputArray, int lastIndex);

int main()
{
    int inputArray[100], counter, sizeofarray;

    printf("Enter number of elements in Array: ");
    scanf("%d", &sizeofarray);
    printf("Enter %d elements of array \n ", sizeofarray);
    for (counter = 0; counter < sizeofarray; counter++)
    {
        scanf("%d", &inputArray[counter]);
    }

    printf("Sum of all numbers are : %d",
           Sum(inputArray, sizeofarray - 1));

    return 0;
}

int Sum(int *inputArray, int lastIndex)
{
    int mid;
    if (NULL == inputArray || lastIndex < 0)
        return 0;
    return inputArray[lastIndex] + Sum(inputArray, lastIndex - 1);
}
