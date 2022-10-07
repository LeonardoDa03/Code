#include <stdio.h>

int main()
{
    int n, m, s, p = 1, i = 1, j = 2, l;
    //printf("Imposta una soglia limite\n");
    //scanf("%d", &l);
    l=99;
    printf("\nI numeri affiatati al di sotto di %d , e di cui il maggiore e' primo, sono:\n\n", l);

    for (i; i <= l; i++)
    {
        for (j = i + 1; j <= l; j++)
        {

            for (int DIV = 2; DIV <= (j / 2); DIV++)
            {
                if ((j % DIV) == 0) //se j ha almeno un divisore 2<=DIV<=(j/2) allora non è primo, inutile controllarli tutti, meglio usare un brake.
                {
                    m=i; //se j non è primo fai in modo di non eseguire la prossima roba, è inutile.
                    break;
                }
                else m=j;
            }

            n = i;
            //m = j;
            s = 0;
            p = 1;

            while (n != m)
            {
                p = p * (n % 10) * (m % 10); // aggiornami il prodotto
                if (p == 0)
                    break; // se il prodotto è 0 fermati, è inutile che continui, rimarrà 0

                // sposta la virgola per permettere al prossimo ciclo di lavorare con le unità
                n = n / 10;
                m = m / 10;

                // forza l'elemento neutro del prodotto per evitrare intenzionalmente di produrre 0 se un numero ha più cifre di un'altra
                if (!n)
                    n = 1;
                if (!m)
                    m = 1;
            }
            if ((i + j) == p)
                printf("%d e %d\n", i, j);
        }
    }

    return 0;
}