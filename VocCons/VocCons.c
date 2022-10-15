#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define sentinella '.'
int main()
{

    struct VocCons
    {
        unsigned int a;
        unsigned int e;
        unsigned int i;
        unsigned int o;
        unsigned int u;
        unsigned int voc;
        char MostVoc;
        unsigned int cons;
        unsigned int Llen;
        unsigned int Clen;
    };

    struct VocCons p = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    char c;
    unsigned int MaxV = 0;
    printf("insersi una stringa (. per terminare) \n");

    scanf("%c", &c);

    while (c != sentinella && c != 10)
    {
        c = tolower(c);
        //printf("%c",c);
        p.Clen++;

        if (c >= 'a' && c <= 'z')
            p.Llen++;

        switch (c)
        {
        case 'a':
            p.a++;
            if (p.a > MaxV)
            {
                MaxV = p.a;
                p.MostVoc = 'a';
            }
            break;

        case 'e':
            p.e++;
            if (p.e > MaxV)
            {
                MaxV = p.e;
                p.MostVoc = 'e';
            }
            break;

        case 'i':
            p.i++;
            if (p.i > MaxV)
            {
                MaxV = p.i;
                p.MostVoc = 'i';
            }
            break;

        case 'o':
            p.o++;
            if (p.o > MaxV)
            {
                MaxV = p.o;
                p.MostVoc = 'o';
            }
            break;

        case 'u':
            p.u++;
            if (p.u > MaxV)
            {
                MaxV = p.u;
                p.MostVoc = 'u';
            }
            break;
        }
        scanf("%c",&c);
    }

    p.voc = p.a + p.e + p.i + p.o + p.u;
    printf("\nhai digitato %u caratteri\n", p.Clen);
    printf("di cui %u lettere\n", p.Llen);
    printf("%d vocali: a: %u, e: %u, i: %u, o: %u, u: %u\n", p.voc, p.a, p.e, p.i, p.o, p.u);
    printf("la vocale piu' frequente e' la %c\n", p.MostVoc);
    printf("%u consonanti\n", p.Llen - p.voc);
    return 0;
}