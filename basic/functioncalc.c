#include <stdio.h>
int main()
{
    char opt;
    int n1;
    int n2;
    float result;
    printf("Choose any operator : ");
    scanf("%c", &opt);
    if (opt == '/')
    {
        printf("you selected Division \n ");
    }
    else if (opt == '*')
    {
        printf("You selected Multiplication");
    }
    else if (opt == '+')
    {
        printf("You selected Addition");
    }
    else if (opt == '-')
    {
        printf("You selected Subtraction");
    }
    printf("enter the first number : ");
    scanf("%d", n1);
    printf("enter the second number : ");
    scanf("%d", n2);

    switch (opt)
    {
    case '+':

        result = n1 + n2;
        printf("The addition of both the number results : ", &result);

    case '-':

        result = n1 - n2;
        printf("The subtraction of both the number results : ", &result);

    case '*':

        result = n1 * n2;
        printf("The multiplication of both the number results : ", &result);

    case '/':

        result = n1 / n2;
        printf("The division of both the number results : ", &result);
   break;  
        default:  /* use default to print default message if any condition is not satisfied */  
            printf (" Something is wrong!! Please check the options ");               
    }  
    return 0;  
}  