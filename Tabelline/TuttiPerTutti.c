/*
===================================================
Scrivere un programma (per il "ripasso globale" delle tabelline)
che riceve da stdin due interi, n e k, e stampa la «tabellona» di
tutte le tabelline da 2 a n, limitandosi al k-esimo valore.

Ad esempio, per n = 5 e k = 8 :

        0   1   2   3   4   5   6   7   8
      -------------------------------------
  2 :   0   2   4   6   8  10  12  14  16
  3 :   0   3   6   9  12  15  18  21  24
  4 :   0   4   8  12  16  20  24  28  32
  5 :   0   5  10  15  20  25  30  35  40

===================================================
*/

#include <stdio.h>

int main()
{
    int n, k, i, j;
    printf("fornisci n e k da moltiplicare\n");
    scanf("%d%d", &n, &k);
    printf("\n     ");

    //comincio col stampare la prima riga determinante i valori di K
    for (i = 0; i <= k; i++)
    {
        printf("%4i", i);
    }

    //stampo la linea separatrice
    printf("\n      ---");
    for (i = 0; i < k; i++)
    {
        printf("----");
    }
    printf("--\n");

    //stampo riga per riga i valori di N e i corrispettivi prodotti per K
    for(j=2;j<=n;j++){
        printf("%3i :",j); //valore N
        for(i=0;i<=k;i++){
            printf("%4i",j*i);  //prodotto N*K
        }
        //vado a capo per la prossima riga
        printf("\n");
    }
    return 0;
}