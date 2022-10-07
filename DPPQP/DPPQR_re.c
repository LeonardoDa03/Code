#include <stdio.h>
//coppie numeri pari, diversi e dal prodotto=quadrato perfetto
int main()
{
    int n, m = 0, x = 0, C = 0;
    printf("Inserisci una seguenza di valori, 0 per termianare \n");
    do
    {
        n = m;
        scanf("%d", &m);
        x=0;

        if (!(n % 2) && !(m % 2) && (n != m))
        {
            
            if (m < n)
                x = m;
            else
                x = n;

            while ((x * x) < (n * m))
            {
                x = x + 2;
            }

            if ((x * x) == (n * m) && (x*x!=0))
            {
                printf("il prodotto di %d e %d e' pari a %d, quadrato perfetto\n", n, m, x * x);
                C++;
            }
        }

    } while (m != 0);
    printf("\n\nIn totale ho trovato %d coppie", C);

    return 0;
}