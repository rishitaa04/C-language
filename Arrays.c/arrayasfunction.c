/*

Function declaration


void printnumbers(int arr[],int n)
            OR
void printnumbers(int *arr,int n)


Function call

printnumber(Arr,n);

*/

#include <stdio.h>

void printNumbers(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printNumbers(arr, 6);
    return 0;
}
void printNumbers(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
