#include <stdio.h>
int main()
{
    int number, lastdigit, sum = 0;
    printf("Enter digits of a number : ");
    scanf("%d", &number);
    while(number != 0){
    lastdigit = number % 10;
    sum = sum + lastdigit;
    number = number / 10;
    }
    printf("Sum of digits is : %d",sum);
}