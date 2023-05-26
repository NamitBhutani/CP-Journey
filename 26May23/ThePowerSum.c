#include <stdio.h>
#include <math.h>
int powersum(int X, int N, int j)
{
    if (X == 0)
        return 0;
    else if (X < 0)
        return 1;
    else
    {
        X = X - (j ^ N);
        j = (int)floor((pow(X, 1. / N)));
        powersum(X, N, j);
    }
}

int main()
{
    int count = 0;
    int X, N;
    scanf("%d", &X);
    scanf("%d", &N);

    for (int j = (int)floor((pow(X, 1. / N))); j >= 1; j--)
    {

        int test = powersum(X, N, j);
        if (test == 0)
        {
            printf("%d", count + 1);
        }
        else if (test == 1)
        {
            continue;
        }
    }
}