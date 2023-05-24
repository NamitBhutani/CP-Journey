#include <stdio.h>
#include <math.h>
int gcd(int, int);
int lcm(int, int);
int max_a;
int multiple = 1;
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
void main()
{
    int x, y;
    printf("Enter x and y:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    printf(" GCD of %d and %d is %d\n", x, y, gcd(x, y));
    printf("LCM of %d and %d is %d\n", x, y, lcm(x, y));
}

int gcd(int a, int b)
{
    if (a < b && (a % b == 0 || b % a == 0))
    {
        return a;
    }
    else if (a > b && (a % b == 0 || b % a == 0))
    {
        return b;
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
            {
                for (int j = 1; j <= b; j++)
                {
                    if (b % j == 0 && (i == j))
                    {
                        max_a = j;
                    }
                    else
                        continue;
                }
            }
        }
        return max_a;
    }
}

// LCM

int lcm(int a, int b)
{
    for (int i = 1; max(a, b) >= 1; i++)
    {
        if (a % i == 0 || b % i == 0)
        {
            multiple *= i;
            a = a / i;
            b = b / i;
        }
    }
    return multiple;
}