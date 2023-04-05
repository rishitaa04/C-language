#include <stdio.h>
int main()
{
    char operator;
    float num1, num2, result = 0;
    printf("Enter your operator : ");
    scanf("%c", &operator);
    printf("You choose %c as your operator\n", operator);
    printf("Enter your numbers : ");
    scanf("%f %f", &num1, &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '%':
        result = num1 / num2;
        break;
    default:
        printf("Invalid operator");
    }
    printf("%f %c %f = %f", num1, operator, num2, result);
    return 0;
}
