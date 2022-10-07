#include <stdio.h>
#define Nbits 32
// attenzione che il bit più significativo è dedicato al segno

int main()
{
    int n, B = Nbits-2, c = 0, power = 1;

    printf("inserisci il numero da convertire \n");
    scanf("%d", &n);
    
    //stampami il bit dedicato al segno
    if(n>=0)
        printf("%d",0);
    else{
        n=-n;
        printf("%d",1);
    }

    while (B >= 0)
    {
        // calcola la potenza del 2 alla N
        while (c < B)
        {
            power = power * 2;
            c++;
        }
        c = 0;

        printf("%d", (n/power)%2);

        power = 1; //ripristima la variabile power per il prossimo ciclo
        B--;
    }

    return 0;
}