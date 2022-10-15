/*
===================================================
Si leggano da stdin due parole (da leggersi come stringhe, cioè array di caratteri) e si verifichi se sono una l'anagramma dell'altra.
Si badi a verificare bene le occorrenze delle lettere:
PENTOLA e POLENTA sono anagrammi, ma TONNO e TONTO non lo sono,
anche se sono formate dalle stesse lettere (T, O, N), hanno pari lunghezza, e… in un certo senso sono anche sinonimi ;)
Riassumendo:

TROGOLO, ZANGOLA -> NO
PENTOLA, POLENTA -> SÌ
TONNO, TONTO -> NO
===================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define L 10 // siccome non vogliamo allocare dinamicamente la memoria definiamo a prescindere il numero massimo di caratteri per stringa
//#define UserIn // definisci se vuoi che l'utente inserisca le parole

// attraverso la Bubble Sort riordiniamo i caratteri di una parola in ordine alfabetico
// si tratta di una diretta manipolazione in memoria, quindi non c'è bisogno che restituiamo nulla (void)
void ordina(char *a) // formiano l'indirizzo della nostra stringa
{
    char i, j, N;
    N = strlen(a); // calcoliamo la lunghezza della stringa

    // Bubble sort
    // N.B. a[i] è l'indirizzo che porta al carattre i+1 della parola
    // occorrono più iterazioni per ordinare l'array con questo tipo di algoritmo
    // sfruttiamo il fatto che nell'ASCII table le lettere siano in ordine alfabetico
    // possiamo ordinare facilmente i caratteri con confronti (A<B<C... a<b<c...)
    for (j = 0; j < N; j++)
    {
        for (i = 0; i < (N - 1 - j); i++)
        {
            if (a[i] > a[i + 1]) // scambiamo i valori solo se diversi, se uguali non ha senso, è uno spreco di risorse inutile scambiare le doppie
            {
                // swap
                a[i] = a[i] - a[i + 1];
                a[i + 1] = a[i + 1] + a[i];
                a[i] = a[i + 1] - a[i];
            }
        }
    }
}

// questa funzione restituisce 1 se le due parole sono anagrammi, 0 altrimenti
// al suo interno viene richiamata la funzione ordina, quindi al termine di questa funzione le parole verranno manipolate
// stampale o memorizzale prima se vuoi preservarle
char anagrammi(char *a, char *b)
{
    // se le due parole hanno lunghezza diversa a prescindere non possono essere anagrammi
    if (strlen(a) != strlen(b))
    {
        return 0; // il return funziona come un break, termina l'esecuzione della funzione
    }

    // se la loro lunghezza è la stessa allora spreco le mie risorse per ordinare le due parole, ponendo i caratteri in ordine alfabetico
    ordina(a);
    ordina(b);

    // a questo punto basta fare un confronto carattere per carattere
    char i;
    for (i = 0; i < strlen(a); i++)
    {
        if (toupper(a[i]) != toupper(b[i])) // basta una differenza per determinare che due parole non sono anagrammi
            return 0;                       // il return funziona come un break, termina l'esecuzione della funzione
    }
    return 1; // se siamo arrivati fino a questo punto, allora sono anagrammi
}

int main()
{
    char str1[L];
    char str2[L];

#ifdef UserIn
    printf("formiscimi due parole:\n");
    scanf("%s%s", str1, str2);
#else
    strcpy(str1, "POLENTA");
    strcpy(str2, "PENTOLA");
#endif
    printf("%s e %s ", str1, str2); // stampo le due parole prima di manipolarle

    if (!anagrammi(str1, str2)) // se non sono anagrammi stampami un bel NON
        printf("NON ");
    printf("sono anagrammi");

    return 0;
}
