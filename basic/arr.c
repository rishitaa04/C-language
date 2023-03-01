// copying an elements of one to another

/*
   #include <stdio.h>
    int main()
    {
        int arr1[] = {1, 2, 3, 4, 5};
        int length = sizeof(arr1) / sizeof(arr1[0]);
        int arr2[length];
        for (int i = 0; i < length; i++)
        {
            arr2[i] = arr1[i];
        }
        printf("Elements of original array: \n");
        for (int i = 0; i < length; i++)
        {
            printf("%d ", arr1[i]);
        }
        printf("\n");
        printf("Elements of new array: \n");
        for (int i = 0; i < length; i++)
        {
            printf("%d ", arr2[i]);
        }
        return 0;
    } */

/*
//merge two arrays of same size
#include <stdio.h>
int main()
{
    int n1,n2,n3;
    int a[100], b[100], c[200];
    printf("Enter the size of first array: ");
    scanf("%d",&n1);
    printf("Enter the array elements: ");
    for(int i = 0; i < n1; i++)
       scanf("%d", &a[i]);
    printf("Enter the size of second array: ");
        scanf("%d",&n2);
    printf("Enter the array elements: ");
    for(int i = 0; i < n2; i++)
       scanf("%d", &b[i]);
    n3 = n1 + n2;
    for(int i = 0; i < n1; i++)
       c[i] = a[i];
    for(int i = 0; i < n2; i++)
        c[i + n1] = b[i];

    printf("The merged array: ");
    for(int i = 0; i < n3; i++)
        printf("%d ", c[i]);

    printf("\nFinal array after sorting: ");
    for(int i = 0; i < n3; i++){
        int temp;
        for(int j = i + 1; j < n3; j++) {
            if(c[i] > c[j]) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for(int i = 0; i < n3 ; i++)
        printf(" %d ",c[i]);
    return 0;
}*/

/**
 * C program to print all unique elements in array
 */

/*
#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE], freq[MAX_SIZE];
    int size, i, j, count;

    Input size of array and elements in array *
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    Find frequency of each element
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    /* Print all unique elements of array
    printf("\nUnique elements in the array are: ");
    for(i=0; i<size; i++)
    {
        if(freq[i] == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
} */