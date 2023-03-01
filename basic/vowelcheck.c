#include <stdio.h>

int main()
{
    char vowel;
    char lower;
    char upper;
    printf(" Enter any alphabet : ");
    scanf("%d", &vowel);

    lower = (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u');

    upper = (vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel == 'U');

    if (lower || upper)

        printf("It's a vowel");
    else

        printf(" Not a vowel ");

    return 0;
}
