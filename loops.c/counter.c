#include <stdio.h>
int main()
{
    for (float i = 1.0; i <= 5; i++)
    {
        printf("%f\n", i);
    }

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c", ch);
    }
    return 0;
}

// counter or operator jo use kra hai vo iss baar float hai

// Infinite loop mtlb loop ko terminate nhi kra hai means loop chlta hi jaega jbtk computer ki memory full ni ho jati hai
