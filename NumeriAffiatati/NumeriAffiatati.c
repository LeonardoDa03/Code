/*
===================================================
Definiamo due numeri come affiatati se sono diversi tra loro e
la loro somma è pari al prodotto delle cifre che li compongono.

Ad esempio (14,34) e (63,81) sono coppie di numeri affiatati:
14 + 34 = 1 x 4 x 3 x 4 = 48
63 + 81 = 6 x 3 x 8 x 1 = 144

Aiutone: si pensi a come funziona il metodo dei resti… il resto della divisione
per dieci è la cifra più a destra nella rappresentazione in base dieci!
===================================================
*/

#include <stdio.h>

int main()
{
        int n,m,s, p = 1;
        printf("\n\nIntroduci due numeri \n");
        scanf("%d%d", &n, &m);
        s=n+m;
        printf("\n%d e %d ", n, m);

        while (n != m)
        {
            p = p * (n % 10) * (m % 10); // aggiornami il prodotto
            // se il prodotto è 0 fermati, è inutile che continui, rimarrà 0
            // se il prodotto ha superato la somma fermati, può solo andare peggio
            if (p == 0 || p>s) break; 

            // sposta la virgola per permettere al prossimo ciclo di lavorare con le unità
            n = n / 10;
            m = m / 10;

            // forza l'elemento neutro del prodotto per evitrare intenzionalmente di produrre 0 se un numero ha più cifre di un'altra
            if (!n) n = 1;
            if (!m) m = 1;

        }
        if (s==p) printf("sono affiatati");
        else printf("NON sono affiatati");
        
    return 0;
}