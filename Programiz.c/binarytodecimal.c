// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int bin, i = 0, sum = 0;
//     printf("Enter any binary number : ");
//     scanf("%d", &bin);
//     while (bin)
//     {
//         sum = sum + pow(2, i) * (bin % 10);
//         bin = bin % 10;
//         i++;
//     }
//     printf("The decimal value of number entered is : %d", sum);
// }
// convert binary to decimal

#include <stdio.h>
#include <math.h>

// function prototype
int convert(long long);

int main()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%lld in binary = %d in decimal", n, convert(n));
    return 0;
}

// function definition
int convert(long long n)
{
    int dec = 0, i = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }

    return dec;
}