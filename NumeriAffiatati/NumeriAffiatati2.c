#include <stdio.h>

int main()
{
        int n,m,s, p = 1;
        printf("\n\n Introduci due numeri \n");
        scanf("%d%d", &n, &m);
        s=n+m;
        printf("\n %d e %d ", n, m);

        while (n != m)
        {
            p = p * (n % 10) * (m % 10); // aggiornami il prodotto
            // se il prodotto è 0 fermati, è inutile che continui, rimarrà 0
            // se il prodotto ha superato la somma fermati, può solo andare peggio
            if (p == 0 || p>s) break; 

            // sposta la virgola per permettere al prossimo ciclo di lavorare con le unità
            n = n / 10;
            m = m / 10;

            // forza l'elemento neutro del prodotto per evitrare intenzionalmente di produrre 0 se un numero ha più cifre di un'altra
            if (!n) n = 1;
            if (!m) m = 1;

        }
        if (s==p) printf("sono affiatati");
        else printf("NON sono affiatati");
        
    return 0;
}