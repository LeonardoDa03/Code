#include <stdio.h>

int PrCr(int n_)
{
    int p = 1;
    do
    {
        p = p * (n_ % 10);
        n_ = n_ / 10;
    } while (n_ > 0);

    return p;
}

int Ca(int i, int j)
{
    if (i != j && (i + j == PrCr(i) * PrCr(i)))
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int n, m;
    // welcome user
    printf("Enter limit \n");

    // reads and stores user input
    int limit;
    scanf("%d", &limit);
    /*
        if (n != m && (n + m == PrCr(n) * PrCr(m)))
        {
            printf("Sono Affiatati\n");
        }
        else
            printf("No, suca\n");
    */
   int contatore=0;
    for (int a = 0; a <= limit; a++)
    {
        for (int b = 0; b <= limit; b++)
        {
            if (Ca(a, b))
            {
                printf("%d e %d sono affiatati \n", a, b);
                contatore++;
            }
        }
    }
    printf("\n\n %d numeri affiatati", contatore);
    return 0;
}