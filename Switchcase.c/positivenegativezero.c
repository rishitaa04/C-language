#include <stdio.h>
int main()
{
    int number;
    printf("Enter your number : ");
    scanf("%d", &number);

    switch (number > 0)
    {
    case 1 :
            printf("It's a positive number ");
            break;
    case 0:
        switch(number < 0) {
                case 1 :
                printf("Negative");
                break;
            case 0 :
                printf("It's zero");
                break;
        }
    }
}