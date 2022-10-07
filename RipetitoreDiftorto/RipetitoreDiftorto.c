#include <stdio.h>

#define sentinella 10 //10 sta per ritorno (invio, \n)

//commenta per disattivare una variante

#define farfallino
#define vamavvo
#define JavaBeachParty
#define fiorentina
#define urlata

int main()
{
    char c = 0, C_In = 1;
    while (c != sentinella)
    {
        scanf("%c", &c);

#ifdef vamavvo
        if (c == 'r')
            c = 'v';
#endif

#ifdef JavaBeachParty
        if (c == 's')
            c = 'f';
#endif

#ifdef fiorentina
        if (c == ' ')
            C_In = 1;

        if (c == 'c' && C_In==1)
        {
            c = 'h';
            C_In = 0;
        }
#endif

#ifdef urlata
    if(c>='a'&&c<='z')
        c=c-32;
#endif

#ifdef farfallino
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            printf("%cf",c);

        else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            printf("%cF",c);
#endif
        printf("%c", c);
    }

    return 0;
}