#include <stdio.h>
int main()
{
    int first, second, third, temp;
    printf("Enter the first number : ");
    scanf("%d", &first);
    printf("Enter the second number : ");
    scanf("%d", &second);
    printf("Enter the third number : ");
    scanf("%d", &third);
    printf("BEFORE SWAPPING : \n");
    printf("First number : %d \n", first);
    printf("Second number : %d \n", second);
    printf("Third number : %d \n", third);

    temp = second;
    second = first;
    first = third;
    third = temp;

    printf("AFTER SWAPPING : \n");
    printf("First number : %d \n", first);
    printf("Second number : %d \n", second);
    printf("Third number : %d \n", third);
}