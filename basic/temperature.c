#include <stdio.h>

// conversion of temp from F TO C and C TO F

int main()
{
    char choice;

    printf("Enter C/c to convert celsius to Fahrenheit.\n");
    printf("Enter F/f to convert Fahrenheit to Celsius.\n");
    printf("Enter your choice :");
    scanf("%c", &choice);

    float temp, ans;

    if (choice == "C" || choice == "c")
    {
        printf("Enter temp :\n");
        scanf("%f", &temp);
        ans = (temp * 1.8) + 32;
        printf("Temp is:", ans);
    }
    else if (choice == "F" || choice == "f")
    {
        printf("Enter temp :\n");
        scanf("%f", &temp);
        ans = (temp - 32) * (5 / 9);
        printf("Temp is :", ans);
    }
    else
    {
        printf("Invalid option");
    }
    return 0;
}