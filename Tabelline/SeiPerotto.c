/*
===================================================
Scrivere un programma (per il "ripasso" delle tabelline) che riceve
dall’utente (leggendolo da stdin) un numero n compreso tra 2 e
12, e stampa la tabellina di n nel modo seguente.
Ad esempio, per n = 4
Tabellina da ripassare: 4
4 x 0 = 0
4 x 1 = 4
4 x 2 = 8
4 x 3 = 12
4 x 4 = 16
4 x 5 = 20
4 x 6 = 24
4 x 7 = 28
4 x 8 = 32
4 x 9 = 36
4 x 10 = 40
===================================================
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Quale numero ti interessa? (tra 2 e 12)\n");
    scanf("%d", &n);
    if (n >= 2 && n <= 12)
    {
        printf("Tabellina da ripassare: %d \n", n);
        for (int i = 0; i <= 10; i++)
        {
            printf("%d x %d = %d \n", n, i, (n * i));
        }
    }
    else
    printf("Vattene a pesca\n");
    return 0;
}