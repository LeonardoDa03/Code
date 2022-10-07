#include <stdio.h>
#define soglia 3000
unsigned int SumDiv(unsigned int N_)
{
    int d, s = 1;

    for (d = 2; 2 * d <= N_; d++)
    {
        if (!(N_ % d))
            s = s + d;
    }
    return s;
}

int main()
{
    unsigned int i = 1, j, SumDivI;
    for (i; i <= soglia; i++)
    {
        SumDivI = SumDiv(i);
        /*siccome i si aggiorna con meno frequenza 
        non ha senso ogni volta calcolare la somma dei divisori di i*/
        for (j = i + 1; j <= soglia; j++)
        {
            if (j == SumDivI && i == SumDiv(j))
                printf("%u e %u amicabili\n", i, j);
        }
    }
    return 0;
}