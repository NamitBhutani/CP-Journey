#include <stdio.h>
int main()
{
    float largest(float a[], int n);
    float secondlargest(float a[], int n);
    float value[4] = {2.8, -4.75, 3.2, 3.67};
    printf("%f\n", largest(value, 4));
    printf("%f\n", secondlargest(value, 4));
}

float largest(float a[], int n)
{
    int i;
    float max;
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
        else
            continue;
    }
    return (max);
}

float secondlargest(float a[], int n)
{
    //  float sortedarray[n];
    for (int i = 0; i < (n - 1); i++)
    {
        if (a[i] > a[i + 1])
        {
            int test = a[i];
            a[i] = a[i + 1];
            a[i + 1] = test;
        }
        else
            continue;
    }
    return a[n - 2];
}