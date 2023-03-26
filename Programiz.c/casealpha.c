#include <stdio.h>
int main()
{
    char ch;
    printf("Enter u to display uppercase and l for lower case \n");
    printf("Enter the case for which you want alphabets in :  ");
    scanf("%c", &ch);

    if (ch == 'U' || ch == 'u')
    {
        for (ch = 'A'; ch <= 'Z'; ++ch)
            printf(" %c ", ch);
    }
    else if (ch = 'L' || ch == 'l')
    {
        for (ch = 'a'; ch <= 'z'; ++ch)
            printf(" %c ", ch);
    }
    else
    {
        printf("Wrongly Entered");
    }
    return 0;
}