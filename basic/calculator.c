#include <stdio.h>
int main()
{
    char operator;
    int Num1;
    int Num2;
    float result;
    printf("Choose any operator : ");
    scanf("%c", &operator);
    if (operator== '+')
    {
        printf(" You choose addition ");
    }
    else if (operator== '-')
    {
        printf(" You choose subtraction ");
    }
    else if (operator== '*')
    {
        printf(" You choose multiplication ");
    }
    else if (operator== '/')
    {
        printf(" You choose division ");
    }
    printf(" \n Enter the first number : ", &Num1);

    scanf("%d", &Num1);

    printf(" Enter the Second number : ", &Num2);

    scanf("%d", &Num2);

    switch (operator)
    {
    case '+':
        result = Num1 + Num2;
        printf(" The sum of given numbers is : %2f ", result);

    case '-':
        result = Num1 - Num2;
        printf(" The subtraction of given numbers is : %2f ", result);

    case '*':
        result = Num1 * Num2;
        printf(" The multiplication of given numbers is : %2f ", result);

    case '/':
        result = Num1 / Num2;
        printf(" The division of given numbers is : %2f ", result);
    }
    return 0;
}