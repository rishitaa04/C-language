/* WHILE LOOP

 while loop me initialisation pelle ho jati hai updation
code k andr hogyi jese

int i = 0           initialise hogyi
while(i < n)        condition hogyi
i++                 incrementation hogyi


*/

// for e.g. : Print from 1-100

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {

        printf("Hello world \n ", i);
        i++;
    }
    return 0;
}