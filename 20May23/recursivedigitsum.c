#include <stdio.h>
int supersum(long long n)
{
    if (n < 10)
        return n;
    else
    {
        long long sum = 0;
        while (n)
        {
            sum = sum + n % 10;
            n = n / 10;
        }
        return supersum(sum);
    }
}

int main()
{
    long long number;
    int repeat;
    scanf("%d %d", &number, &repeat);
    int summain = 0;
    while (number)
    {
        summain = summain + number % 10;
        number = number / 10;
    }
    summain = summain * repeat;
    printf("%lld", supersum(summain));
    return 0;
}