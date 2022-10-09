/*
===================================================
Definiamo due numeri come affiatati se sono diversi tra loro e
la loro somma è pari al prodotto delle cifre che li compongono.

Ad esempio (14,34) e (63,81) sono coppie di numeri affiatati:
14 + 34 = 1 x 4 x 3 x 4 = 48
63 + 81 = 6 x 3 x 8 x 1 = 144

Aiutone: si pensi a come funziona il metodo dei resti… il resto della divisione
per dieci è la cifra più a destra nella rappresentazione in base dieci!

!!!VAR. 4a.!!!
Si scriva un programma che elenca tutte le diverse coppie di numeri affiatati composti da due
cifre.

!!!VAR. 4b.!!!
Si elenchino tutte le coppie di numeri affiatati di due cifre in cui il maggiore è un numero
primo. Le uniche due coppie sono (27,71) e …?

!!!VAR. 4c.!!!
Si elenchino tutte le coppie di numeri affiatati minori di una SOGLIA costante stabilita (ad
esempio 2000), indipendentemente dal numero di cifre.
===================================================
*/

#include <stdio.h>

// commenta la variante che NON vuoi utilizzare

#define VarA // soglia 99 (parire da 10)
#define VarB // il maggiore è primo
#define VarC // soglia inserita dall'utente

int main()
{
    int n, m, s, p = 1, i = 1, j = 2, l;

#ifdef VarA
    l = 99;
    i=10;
#endif

#ifdef VarC
    printf("Imposta una soglia limite (-1 per infinito)\n");
    scanf("%d", &l);
    printf("\nI numeri affiatati al di sotto di %d sono:\n\n", l);
#endif

    for (i; (i <= l) || (l < 0); i++)
    {
        // se l'utene ha inserito un numero negativo (infinito) limita comunque j a qualcosa
        // ad esempio i*i, ma può essere qualunque altro limite
        for (j = i + 1; (j <= i * i && l < 0) || (j <= l && l > 0); j++)
        {
#ifdef VarB
            for (int DIV = 2; DIV * DIV <= j; DIV++)
            {
                if ((j % DIV) == 0) // se j ha almeno un divisore 2<=DIV<=sqrt(j) allora non è primo, inutile controllarli tutti, meglio usare un brake.
                {
                    m = i; // se j non è primo fai in modo di non eseguire la prossima roba, è inutile.
                    break;
                }
                else
                    m = j;
            }
#else
            m = j;
#endif

            n = i;
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