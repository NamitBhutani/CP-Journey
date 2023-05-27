#include <math.h>
#include <stdio.h>

int count = 0;
int checkRecursive(int num, int x, int k, int n)
{
    if (x == 0)
        count++;

    int r = (int)floor(pow(num, 1.0 / n));

    for (int i = k + 1; i <= r; i++)
    {
        int a = x - (int)pow(i, n);
        if (a >= 0)
            checkRecursive(num, x - (int)pow(i, n), i, n);
    }
    return count;
}

int main()
{
    int x = 0, n = 0;
    scanf("%d", &x);
    scanf("%d", &n);
    printf("%d", (checkRecursive(x, x, 0, n)));
    return 0;
}
