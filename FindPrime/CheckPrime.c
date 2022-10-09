/*
===================================================
Scrivere un programma che legge un numero intero positivo e
controlla se è primo o no.

Esempio:

Inserisci un numero: 101
Si tratta di un numero primo

Per comodità di riferimento e controllo, i «primi» numeri primi sono:
2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73,
79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157,
163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239,
241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331,
337, 347… 

===================================================
*/

#include <stdio.h>

// creo una funzione che mi restituisce 1 se il numero è primo, 0 altrimenti
unsigned char CheckPrime(unsigned long long int N_)
{
    // se un numero è pari (l'ultimo bit è 0) ed è maggiore di 2, OPPURE è minore o uguale a 1
    // allora per certo non è primo
    if ((!(N_ & 1) && N_ > 2) || N_ <= 1)
        return 0;

    // controllo a partire da 3, 2 l'ho già verificato prima, e controllo fino a radice di N_ 
    // non ha senso calcolare la radice quadrata, è un processo troppo costoso, meglio i*i<N_
    // avendo già controllato che N_ non sia pari proverò tutti i divisori dispari (i=i+2)
    for (int i = 3; i * i <= N_; i = i + 2)
    {
        if (!(N_ % i))
        {
            return 0;
        }
    }

    // se sono arrivato fin quaggiù è perchè non ho trovato alcun divisore, allora N_ è primo.
    return 1;
}

int main()
{
    // alloco tanta memoria in caso l'utente volesse testare un numero grande
    // in alternativa N può essere dichiarato come si vuole
    // ma si consiglia comunque di usare "unsigned" poichè per definizione un numero primo è >1

    unsigned long long int N;

    //leggi il valore inseito dall'utente e stampa il risultato
    printf("Enter an integer: ");
    scanf("%llu", &N);

    printf("\n%llu is ",N);

    //se N non è primo dimmelo
    if (!CheckPrime(N))
        printf("NOT ");
    
    printf("prime");

    return 0;
}
