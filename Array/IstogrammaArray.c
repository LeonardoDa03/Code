/*
===================================================
scriviamo un programma che assegni ad ogni elemento di un array (di grandezza prestabilita N)
un valore randomico tra 1 e 10 (utilizzando le funzioni rand() e srand() presenti in stdlib).

Dopo di che il programma stamperà con * un'istogramma rapperesentate tutti i valori dell'array

Esempio:

per a[10]={9, 10,  9,  8,  6,  8,  6,  6,  1,  3}
l'stogramma sarà:

    *
  *  *  *
  *  *  *  *     *
  *  *  *  *     *
  *  *  *  *  *  *  *  *
  *  *  *  *  *  *  *  *
  *  *  *  *  *  *  *  *
  *  *  *  *  *  *  *  *     *
  *  *  *  *  *  *  *  *     *
  *  *  *  *  *  *  *  *  *  *
  ----------------------------
  9 10  9  8  6  8  6  6  1  3 //valori di a[]
  0  1  2  3  4  5  6  7  8  9 //indici di a[]
===================================================
*/

#include <stdio.h>
#include <stdlib.h> //libreria contenente le funzioni rand() e srand()

#define N 10 // numero di elementi dell'array
int main()
{
    char a[N] = {0}; // array
    char i, j;
    srand(0); // impostiamo il seme della funzione randomica

    printf("\n");

    for (i = 0; i < N; i++)
    {
        // assegna i valori agli elementi di a
        a[i] = (rand() % 10) + 1; // qualsiasi numero /10 restituisce resto compreso tra 0 e 9, con il +1 otteniamo numeri tra 1 e 10

        // stampa già subito la riga più in alto dell'istogramma man mano che conosci i valori di a[i]
        if (a[i] == 10)
            printf("  *");
        else
            printf("   ");
    }

    // a capo per la nuova riga
    printf("\n");

    // la nuova riga controlla a partire da 9, (10 già controllato in precedenza) giù fino ad 1
    for (i = 9; i > 0; i--)
    {
        // cicla tutti gli elementi dell'array, se il valore è >= a i allora stampa *, altrimenti spazio vuoto
        for (j = 0; j < N; j++)
        {
            if (a[j] >= i)
                printf("  *");
            else
                printf("   ");
        }
        printf("\n");
    }

    // stampa una linea di divisione lunga quanto basta
    printf("  ");
    for (i = 0; i < N - 1; i++)
    {
        printf("---");
    }
    printf("-\n");

    // stampa tutti gli elementi di a[]
    for (i = 0; i < N; i++)
    {
        printf("%3i", a[i]);
    }
    printf("\n");

    // stampa tutti gli inidici di a[i]
    for (i = 0; i < N; i++)
    {
        printf("%3i", i);
    }

    return 0;
}