#include <stdio.h>
int SumDiv(int N_)
{
    int d, s = 1;

    for (d = 2; 2 * d <= N_; d++)
    {
        if (!(N_%d))
            s = s + d;
    }
    return s;
}

int main()
{
    int N, Sd;
    scanf("%d", &N);
    Sd=SumDiv(N);
    if(N==Sd)
        printf("perfetto");
    else if(N>Sd)
        printf("deficente");
    else
        printf("abbondante");
}