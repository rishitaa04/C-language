#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);

    switch (num % 2 == 0)
    {
    case 0:
        printf("It's not even");
        break;
    case 1 :
        printf("It's an even number");
        break;
    }
}