/*
===================================================
Scrivere un programma che legge dallo standard input un anno (inserito
dall’utente come numero intero) e dice se è bisestile o no. 

Esempio:
Quale anno ti interessa? 1777
Anno NON bisestile

Si ricorda che, 1582 in poi, un anno è considerato bisestile se è multiplo di 4
(e.g., il 2012), però se è un multiplo di 100 (e.g., il 1900) allora non è bisestile, a
meno che non sia anche multiplo di 400, nel qual caso invece lo è (e.g., il 2000).
Più sinteticamente, tutti gli anni successivi alla bolla papale "Inter gravissimas" (del 24/2/1582)
sono bisestili se divisibili per 4, tranne quelli «secolari» non divisibili per 400, che non lo sono.

Riassumendo: 1980: sì, 1900: no, 2000: sì, 1600: sì, 1704: sì, 1700: no, 1204: no.
===================================================
*/

#include <stdio.h>

int main()
{
    int A;
    printf("Quale anno ti interessa? \n");
    scanf("%d", &A);

    if ((A > 1582 && !(A % 4)) && !(!(A%100)^!(A%400)))
        printf("%d e' un anno bisestile", A);
    else
        printf("%d NON e' un anno bisestile", A);

    return 0;
}