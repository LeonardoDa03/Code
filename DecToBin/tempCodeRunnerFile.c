#include <stdio.h>
#include <math.h>
#define Base 2

int main()
{
    signed long int N;
    // volgio allocare più memoria possibile perchè non so quanto grande (o piccolo) sarà il numero inserito dall'utente
    //(un long per 32 bit (%ld), due long per 64 bit (%lld) )

    unsigned long int pow = 128;
    // alla peggio pow vale 2^64 se bisogna codificare a 64 bit, a 32 bit un long basta, non mi interessa il segno percè la variabile sarà sempre >=1

    unsigned char Byte = 1, exp = 7, B=exp;
    // per queste variabili solo 8 bit bastano

    printf("inserisci un numero da convertire\n");
    scanf("%d", &N);

    // quanti byte mi bastano per rappresentare questo numero? (minimo 1)
    while (pow <= N && pow <= -N)
    {
        pow = pow * 2;
        exp++;
        if (Byte * 8 < exp)
            Byte = Byte * 2;
        // di solito si alloca una potenza di 2^n byte (non alloco ad esempio 24 byte)
    }
    printf("almeno %d Byte per rappresentare %d: 2^%d=%d\n\n", Byte, N, exp, pow);

    // copio la mia variabile esponente per conservarmela
    // eseguirò la codifica dei nunovo numero a partire dal bit B
    B = exp;

    if (N < 0)
    {
        N = N + pow;
        printf("\nN negativo, nuovo N da codificare: %d\n\n", N);
        if (exp == Byte * 8)
        {
            Byte = Byte * 2;
            printf("\n! Adesso ho bisogno di %d Byte\n\n", Byte);
        }

        //sampo tanti 1 quanti ne ho bisogno per "riempire" il/i Byte fino al bit dove comincerò la codifica del nuovo N
        while (Byte * 8 - exp)
        {
            printf("%d", 1);
            exp++;
        }
    }
    else
    {
        //sampo tanti 0 quanti ne ho bisogno per "riempire" il/i Byte fino al bit dove comincerò la codifica di N
        while (Byte * 8 - exp)
        {
            printf("%d", 0);
            exp++;
        }
    }

    // questo è il core della codifica di un numero positivo
    while (B > 0)
    {
        pow = 1;
        exp = B;
        while (exp > 0)
        {
            pow = pow * 2;
            exp--;
        }
        printf("%d", (N * 2 / pow) % 2);
        B--;
    }

    return 0;
}