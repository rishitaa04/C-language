#include <stdio.h>
int main()
{
    char c;
    printf("Enter character : ");
    scanf("%c", &c);
   if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("It's a character");
    }
    else
    {
        printf("Not a character");
    }
    return 0;
}