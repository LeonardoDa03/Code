/*
===================================================
Definiamo due numeri come affiatati se sono diversi tra loro e
la loro somma è pari al prodotto delle cifre che li compongono.
Ad esempio (14,34) e (63,81) sono coppie di numeri affiatati:
14 + 34 = 1 x 4 x 3 x 4 = 48
63 + 81 = 6 x 3 x 8 x 1 = 144
Aiutone: si pensi a come funziona il metodo dei resti… il resto della divisione
per dieci è la cifra più a destra nella rappresentazione in base dieci!

!!!VAR. 4d.!!!
Esistono anche i numeri auto-affiatati (cioè affiatati con se stessi).
Sono il 2 ( 2+2 = 2x2 = 4 ), il 128 ( 128+128 = 1x2x8x1x2x8 = 256 ), e…?
===================================================
*/

#include <stdio.h>

int main()
{
    int n = 2, N=n, s = 4, p = 1, l=18432;

    while (N <= l || l<0)
    {
        n=N;
        s = 2 * n;
        p=1;
        do
        {
            p = p * (n % 10); // aggiornami il prodotto

            // se il prodotto è 0 fermati, è inutile che continui, rimarrà 0
            // se il prodotto ha superato la somma fermati, può solo andare peggio
            if (p == 0 || p>s)
                break;

            // sposta la virgola per permettere al prossimo ciclo di lavorare con le unità
            n = n / 10;

        } while (n > 0);
        if (s == p*p)
            printf("\n %d e' auto-affiatante \n", s / 2);
        N++;
    }
    return 0;
}