#include <stdio.h>

int main()
{
    char sentinella = '.', c, PrC;
    int cons = 0, voc=0, a = 0, e = 0, i = 0, o = 0, u = 0, MaxOV = 0, Lungh = 1, MaxLungh=0;
    printf("insersi u carattere (. per termianre) \n");
    
    while (c != sentinella)
    {
        scanf("%c", &c);
        // cosgtringi minuscola
        if ((c >= 'A') && (c <= 'Z'))
            c = c + ('a' - 'A');

        if ((c >= 'a') && (c <= 'z'))
        {
            if (c == 'a')
            {
                a++;
                if (a > MaxOV)
                    MaxOV = a;
            }
            else if (c == 'e')
            {
                e++;
                if (e > MaxOV)
                    MaxOV = a;
            }
            else if (c == 'i')
            {
                i++;
                if (i > MaxOV)
                    MaxOV = a;
            }
            else if (c == 'o')
            {
                o++;
                if (o > MaxOV)
                    MaxOV = a;
            }
            else if (c == 'u')
            {
                u++;
                if (u > MaxOV)
                    MaxOV = a;
            }
            else
                cons++;

            voc=a+e+i+o+u;
            if (c == PrC)
            {
                Lungh++;
                if (Lungh>MaxLungh)
                    MaxLungh=Lungh;
            }
            else
                Lungh=1;

            PrC = c;
        }
    }
    return 0;
}