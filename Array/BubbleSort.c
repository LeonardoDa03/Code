#include <stdio.h>

#define N 4

int main()
{
    unsigned int a[N] = {77, 42, 35, 12};
    char i, j;

    for (j = 0; j < N; j++)
    {
        for (i = 0; i < (N - 1 - j); i++)
        {
            if (a[i] > a[i + 1])
            {
                // swap
                a[i] = a[i] - a[i + 1];
                a[i + 1] = a[i] + a[i + 1];
                a[i] = a[i + 1] - a[i];
                // swap(a[i], a[i + 1]);
            }
        }
    }

    for (i = 0; i < N; i++)
    {
        printf("%3u", a[i]);
    }

    return 0;
}