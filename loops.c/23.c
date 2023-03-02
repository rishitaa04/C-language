// Sum of even digits of a given number

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);

    int sum = 0;
    int last = 0;
    while(n != 0 ){
        last = n % 10;
        if (last % 2 == 0){
            sum = sum + last;
        }
        n = n / 10;
    }
    printf("The sum of even no. of the given digits is : %d", sum);
    return 0;
}