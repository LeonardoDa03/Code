/*
===================================================
Si inizializzi una matrice quadrata m[N][N] con gli interi da 1 a N^2 in modo che la prima riga contenga i numeri da 1 a N, la seconda da N a 2N, etc.
Si definisca N tramite #define
Si stampi poi a video la matrice, e si chieda all’utente di scegliere una cella della matrice inserendone le coordinate (i numeri di riga e colonna r e c).
Sia K il valore contenuto in m[r][c]. Si modifichi quindi la matrice come descritto in seguito, e la si stampi nuovamente:

-   La cella selezionata resta invariata;
-   Tutte le celle della colonna c diverse da quella selezionata (in verde in figura) assumono valore 2K
-   A tutte le celle "precedenti" (cioè su righe precedenti a r, oppure sulla stessa riga ma in colonne precedenti a c) che non siano nella colonna c
    si aggiunge K.
-   A tutte le celle "successive" (righe successive, oppure stessa riga ma colonne successive) che non siano sulla colonna c
    si sottrae K.

Ad esempio, per N = 5, r=2, c=2:

prima:
   1   2   3   4   5
   6   7   8   9  10
  11  12  13  14  15
  16  17  18  19  20
  21  22  23  24  25

dopo:
  14  15  26  17  18
  19  20  26  22  23
  24  25  13   1   2
   3   4  26   6   7
   8   9  26  11  12
===================================================
*/

#include <stdio.h>

#define N 5 // definiamo la grandezza della matrice quadrata

int main()
{
    unsigned int a[N][N]; // la matrice
    unsigned int r, c;    // sono le coordinate riga e colonna
    unsigned int v = 1;   // valore che serve per popolare la matrice

    // iniziamo a popolare la matrice con valori crescenti di v, e nel frattempo stampiamo
    for (r = 0; r < N; r++)
    {
        for (c = 0; c < N; c++)
        {
            a[r][c] = v;      // dinamicamente scorriamo tutte le righe e le colonne della matrice e le inizializziamo con v
            printf("%4u", v); // stampiamo il valore
            v++;              // v incrementa ogni volta
        }
        printf("\n"); // quando è terminata una riga si passa alla prossima
    }

    // chiediamo all'utente le coordinate di K
    printf("dammi delle coordinate\n");

    unsigned int kr, kc; // coordinate di k
    unsigned int k;      // k

    scanf("%u%u", &kr, &kc); // l'utente inserisce le coordinate di k
    k = a[kr][kc];           // k viene assegnato il valore corrispondente per quelle coordinate
    //printf("k: %u\n\n", k);

    for (r = 0; r < N; r++)
    {
        for (c = 0; c < N; c++)
        {
            // righe precedenti a kr, oppure stessa riga ma colonne precedenti a kc, che non siano nella colonna c
            if ((r == kr && c < kc) || (r < kr && c != kc))
                a[r][c] += k; // si aggiunge K

            // righe successive a kr, oppure stessa riga ma colonne successive a kc, che non siano sulla colonna c
            if ((r == kr && c > kc) || (r > kr && c != kc))
                a[r][c] -= k; // si sottrae k

            // stessa colonna di kc ma diversa riga
            if (c == kc && r != kr)
                a[r][c] = 2 * k; // si sovrascrive 2*k

            // se stessa riga di kr e stessa colonna di kc, rimane invariato

            printf("%4u", a[r][c]); // stampo il nuovo elemento della matrice appena modificato
        }
        printf("\n"); // a capo per la prossima riga
    }

    return 0;
}
