#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, Count = 0, n, m;
    printf("Inserisci una serie di numeri, 0 per terminare\n");
    do
    {
        a = b;
        b = c;
        scanf("%d", &c);
        if (
            a * a == b * b + c * c ||
            b * b == a * a + c * c ||
            c * c == a * a + b * b)
        {
            printf("%d, %d, %d sono terne Pitagoriche ", a, b, c);
            Count++;

            //controlla se riducibili o meno con l' mcd di due numeri qualunque della terna
            n = a;
            m = b;

            while (m != n)
            {
                if (n > m)
                    n -= m;
                else
                    m -= n;
            }

            if (n == 1)
                printf("irriducibili\n");
            else
                printf("riducibili\n");
        }
    } while (c != 0);
    return 0;
}