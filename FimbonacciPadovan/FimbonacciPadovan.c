/*
===================================================
Tutti conoscono la successione di Fibonacci (F0 = 1, F1 = 1, Fn = Fn-1 + Fn-2)
La successione di Padovan è (similmante) la serie di numeri naturali Pn
definiti nelle prime tre posizioni dalla convenzione P0 = P1 = P2 = 1
e, per tutti i valori successivi, dalla relazione: Pn = Pn-2 + Pn-3

I primi venti numeri della successione sono quindi:
1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16, 21, 28, 37, 49, 65, 86, 114, 151, …

Scrivere un programma che chiede all’utente un intero positivo k e stampa in ordine tutti i
primi k numeri della successione di Fibonacci. O di Padovan, che è…. facile uguale!!

Variante: Scrivere un programma che verifica se il numero inserito (che deve essere positivo) è
uno degli elementi della successione di Fibonacci (di Padovan) oppure no.

Attenzione (aiutini):
• Si dichiarino e inizializzino opportune variabili dedicate a calcolare la sequenza (tramite un ciclo
che ad ogni iterazione calcoli l’elemento successivo)
• Si badi a gestire correttamente l’uscita dal ciclo!
• Non è agevole fare una verifica diretta sul numero inserito dall’utente. Conviene piuttosto
calcolare a (partire da 1,1,1) tutti gli elementi della successione, in ordine crescente, fino a quando
è possibile verificare l’appartenenza o meno del numero inserito da terminale
===================================================
*/

#include <stdio.h>

#define soglia 25
#define controllo

int main()
{
    unsigned long long int a = 1, b = 1, c = 2, d; //qua si lavora con numeri grossi!
    unsigned int k = 2, Soglia, N;
    unsigned char app = 0;

#ifdef soglia
    Soglia = soglia;
#else
    printf("inserisci una soglia: ");
    scanf("%u", &Soglia);
#endif

#ifdef controllo
    printf("\ninserisci un valore da controllare: ");
    scanf("%u", &N);
#endif

    //============Fibonacci============
    printf("\nI primi %u elementi della sequenza di Fibonacci sono: ", Soglia);

    printf("%u, %u", a, b);
    while (c <= N || k < Soglia) // se abbiamo superato la soglia e non abbiamo trovato corrispondeza allora basta
    {
        c = a + b;
        if (k < Soglia)
            printf(", %lu", c); // se siamo ancora sotto la soglia continua a stampare
        a = b;
        b = c;
        if (N == c)
            app = 1; // se hai trovato una corrispondenza ricordalo
        k++;
    }

    //============Padovan============

    printf("\n");

    // reimposto le variabili per poterle riciclare
    a = 1, b = 1, c = 1, k = 3;
    printf("\nI primi %u elementi della sequenza di Padovan sono: ", Soglia);

    printf("%d, %d, %d", a, b, c);

    while (d <= N || k < Soglia) // se abbiamo superato la soglia e non abbiamo trovato corrispondeza allora basta
    {
        d = a + b;
        a = b;
        b = c;
        c = d;
        if (k < Soglia)
            printf(", %llu", d); // se siamo ancora sotto la soglia continua a stampare
        if (N == d)
            app = app | 2; // costringi un 1 al secondo bit per indicare una corrispondenza
        k++;
    }

#ifdef controllo
    printf("\n\n%u ", N);
    if (!(N <= 3 || app & 1)) // se un numero è <=3 o (l'ultimo bit di) app è 1 allora N fa parte di Fibonacci, altrimenti no
        printf("NON ");

    printf("appartiene alla sequenza di Fibonacci\n");

    printf("%u ", N);
    if (!(N <= 3 || app & 2)) // se un numero è <=3 o (il secondo bit di) app è 1 allora N fa parte di Padovan, altrimenti no
        printf("NON ");

    printf("appartiene alla sequenza di Padovan\n");
#endif

    return 0;
}