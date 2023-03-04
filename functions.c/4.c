// write a function to print namaste if user is indian and bonjor if the user is french

#include <stdio.h>
void namaste();
void bonjor();

int main()
{
    printf("Enter f for french and i for Indian : ");
    char ch;
    scanf("%c", &ch);

    if (ch == 'i')
    {
        namaste();
    }
    else
    {
        bonjor();
    }
    return 0;
}

void namaste()
{
    printf("Namaste !! \n");
}
void bonjor()
{
    printf("bonjor !! \n");
}