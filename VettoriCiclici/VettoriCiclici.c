/*
===================================================
Si consideri un array v di N interi (come ad esempio v1 e v2 in calce con N=8).
Si vuole "esplorare" il vettore, iniziando dal primo elemento v[0] e muovendosi con la regola descritta in seguito
per stabilire se l'esplorazione porta ad un percorso "infinito”, perché il vettore è ciclico, oppure ad un certo punto l'esplorazione termina.

Come ci si muove nel vettore: il valore contenuto in ogni elemento, se compreso tra 0 e N-1, rappresenta l'indice del prossimo elemento da visitare;
se invece è esterno a tale intervallo rappresenta un riferimento "errato", che indica una posizione esterna al vettore, e comporta la fine del processo di esplorazione.
Si scriva un programma che stabilisce se un vettore di N interi è ciclico o no.

Esempio:
int v1[N]={3,-3,5,6,2,4,2,11} //è ciclico
             0 1 2 3 4 5 6  7
int v2[N]={5,-6,7,6,2,4,2,9} //non è ciclico
            0 1 2 3 4 5 6 7

Il programma non deve leggere i numeri da stdin (è inutile!);
basta una inizializone int v1[N]={3,-3,5,6,2,4,2,11}.
Si badi all’algoritmo!
===================================================
*/

#include <stdio.h>

#define N 8 // conosciamo a priori la lunghezza del nostro array
#define v1  // decommenta se vuoi utilizzare v1, commenta se vuoi utilizzare v2

int main()
{
#ifdef v1
    int v[N] = {3, -3, 5, 6, 2, 4, 2, 11}; // v1
#else
    int v[N] = {5, -6, 7, 6, 2, 4, 2, 9}; // v2
#endif
    int i = 0; // indirizzo dove andare, all'inizio è 0

    char B[N] = {0}; // le mie briciole di pane lungo il percorso, all'inizio non ho lasciato nulla, tutto 0
                     // se incontrerò una briciola di pane lungo il percorso vorrà dire che sarò già stato li e quindi il percorso è ciclico

    char ciclico = 0; // variabile che descrive se il percorso è ciclico (1) o meno (0)

    // forzando un valore negativo a 'i' usciremo dal while, quando ciclico sarà impostato ad 1 usciremo dal while
    while (i >= 0 && !ciclico)
    {
        if (B[i] == 1)
        {
            // se ci stei già stato allora è ciclico
            i = -1;      // fai qualcosa per uscire dal while
            ciclico = 1; // fammi sapere che è ciclico
        }

        if (v[i] >= 0 && v[i] < N)
        {
            // indirizzo accattabile
            B[i] = 1; // ricorda dove sei già stato, metti una briciola
            i = v[i]; // aggiorna il prossimo indirizzo
        }
        else
            // valore non accettabile, esci dal while
            i = -1;
    }

    if (!ciclico) // se non è ciclico fammelo sapere
        printf("NON ");

    printf("ciclico");
    return 0;
}