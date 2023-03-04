// SUM OF TWO NUMBERS

int sum(int a, int b);
int main()
{
    int a;
    printf("Enter any number : ");

    scanf("%d", &a);

    int b;

    printf("Enter any number : ");

    scanf("%d", &b);

    int s = sum(a, b);
    printf("Sum is : %d  ", s);

    return 0;
}
int sum(int x, int y)
{
    return (x + y);
}
