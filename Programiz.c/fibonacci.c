#include <stdio.h>
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Fibonacci series is : %d",fib(n));
    return 0;
}

// #include <stdio.h>
// int main()
// {

//     int i, n;
//     int t1 = 0, t2 = 1;
//     int nextTerm = t1 + t2;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series: %d, %d ", t1, t2);
//     for (i = 3; i <= n; ++i)
//     {
//         printf("%d ", nextTerm);
//         t1 = t2;
//         t2 = nextTerm;
//         nextTerm = t1 + t2;
//     }

//     return 0;
// }
