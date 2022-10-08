#include <stdio.h>
/*
===================================================
Scrivere un programma che legge da stdin un numero n intero
positivo e ne stampa su stdout tutti i divisori propri (1 incluso, n
escluso).
Promemoria: l’operatore / esprime il quoziente e l’operatore %
esprime il resto della divisione (tra interi)
Esempio:
Inserisci un numero: 20
I divisori propri di 20 sono: 1 2 4 5 10
===================================================
*/

int main()
{
    int N, i=1;
    // welcome user
    printf("Enter an integer: ");

    // reads and stores user input
    scanf("%d", &N);
    
    printf("N is divisible by %d", i);
    for (int i = 2; i <= (N / 2); i++)
    {
        if ((N % i) == 0)
        {
            printf("  %d", i);
        }
    }

    printf("\n\n");
    return 0;
}