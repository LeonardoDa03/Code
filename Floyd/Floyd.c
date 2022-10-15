/*
===================================================
Scrivere un programma che legge da stdin un numero intero n e stampa a video le prime n righe del triangolo di Floyd 
(un triangolo rettangolo che contiene tutti i numeri naturali disposti come in figura). 
Ad esempio, per n=10:

 1
 2  3
 4  5  6
 7  8  9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31 32 33 34 35 36
37 38 39 40 41 42 43 44 45
46 47 48 49 50 51 52 53 54 55

La soluzione più immediata utilizza due cicli annidati. 
Come esercizio di "elasticità espressiva" si progetti anche una soluzione che utilizza un solo ciclo.

Variante:   

Si stampi il triangolo "al contrario", cioè partendo dall'ultima riga (nell'esempio: partendo dal 46):
 46 47 48 49 50 51 52 53 54 55
 37 38 39 40 41 42 43 44 45
 29 30 31 32 33 34 35 36
 22 23 24 25 26 27 28
 16 17 18 19 20 21
 11 12 13 14 15
  7  8  9 10
  4  5  6
  2  3
  1
===================================================
*/

#include <stdio.h>

//#define reverse //decommenta se vuoi il triangolo al contrario

int main()
{
    unsigned int n, N, v = 1, j = 1, c = 1;
    printf("inseirisci numero di righe desiderate per rappresentare il triangolo di Floyd");

#ifdef reverse
    printf(" al contrario: ");
    scanf("%u", &n);
    N = (n * (n + 1)) / 2; // formula n(n+1)/2 per calcolare la somma dei Naturali fino a n … GRANDE GAUSS

    v = N - n + 1; // partiamo da N (Gauss) - numeri di elementi che stamperò +1 (es, per N=55, n=10, 55-10+1=46)
    j = 0;         // quanti elementi abbiamo stampato

    while (n >= 1) //fintantochè il la riga sia >=1 (invertito)
    {
        printf("%3d", v);
        j++; // aggiornami il numero di elementi stampati in una riga
        if (j == n)
        {
            printf("\n");
            n--;                         // riduci quanti elementi vorrò stampare nella prossima riga
            j = 0;                       // resettami il numero di elementi stampati in una riga
            v = ((n * (n + 1)) / 2) - n; // ricalcola il prossimo valore iniziale
        }

        v++; // calcoliamo il prossimo valore da stampare, basta incrementare
    }
    printf("\n\n");
#else
    printf(": ");
    scanf("%u", &n);
    N = (n * (n + 1)) / 2; // formula n(n+1)/2 per calcolare la somma dei Naturali fino a n … GRANDE GAUSS
    while (v <= N)
    {
        printf("%3u", v);

        // j è quanti elementi ho stampato in una riga
        // c è quanti ne voglio stampare
        if (j == c)
        {
            printf("\n"); // nuova riga
            c++;          // la prossima volta volgio stampare più elementi
            j = 1;        // il mio contatore di elementi in una riga torna a 1, perchè ho iniziato una nuova riga
        }
        else
            j++; // aggioriamo quanti elementi aggiamo stampato

        v++; // calcoliamo il prossimo valore da stampare, basta incrementare
    }
    printf("\n\n");
#endif

    return 0;
}