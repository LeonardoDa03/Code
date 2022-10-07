#include <stdio.h>

int main()
{
    int n, m, s, p = 1, i = 1, j = 2, l;
    printf("Imposta una soglia limite\n");
    scanf("%d", &l);
    printf("\nI numeri affiatati al di sotto di %d sono:\n\n", l);

    while(i<l || i>l)
    {
        j=i+1;
        while((j<=i*i && l<0) || (j<l && l>0))
        {  
            n = i;
            m = j;
            s = 0;
            p = 1;

            while (n != m)
            {
                //printf("\n %d , %d \n", n, m);
                p = p * (n % 10) * (m % 10); // aggiornami il prodotto
                // se il prodotto è 0 fermati, è inutile che continui, rimarrà 0
                // se il prodotto ha sforato può solo andare peggio
                if (p == 0 || p>(i+j))
                    break; 

                // sposta la virgola per permettere al prossimo ciclo di lavorare con le unità
                n = n / 10;
                m = m / 10;
                
                // forza l'elemento neutro del prodotto per evitrare intenzionalmente di produrre 0 se un numero ha più cifre di un'altra
                if (!n)
                    n = 1;
                if (!m)
                    m = 1;
            }
            if ((i + j) == p) printf("%d e %d\n", i, j);
            j++;
        }
        i++;
    }

    return 0;
}