#include <stdio.h>

int main()
{
    int n = 2, N=n, s = 4, p = 1, l;
    printf("inserisci una soglia limite: \n");
    scanf("%d", &l);
    printf("\n numeri auto-affiatati al si sotto di %d sono", l);
    //numero negativo per continuare all' infinito.
    while (N < l || l<0)
    {
        n=N;
        s = 2 * n;
        p=1;
        do
        {
            p = p * (n % 10); // aggiornami il prodotto
            if (p == 0)
                break; // se il prodotto è 0 fermati, è inutile che continui, rimarrà 0

            // sposta la virgola per permettere al prossimo ciclo di lavorare con le unità
            n = n / 10;

        } while (n > 0);
        if (s == p*p)
            printf("\n %d e' auto-affiatante \n", s / 2);
        N++;
    }
    return 0;
}