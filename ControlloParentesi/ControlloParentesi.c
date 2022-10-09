/*
===================================================
Si legga da stdin una sequenza a priori illimitata di caratteri terminata dal '.' e, senza
memorizzarla, giacché è inutile, si controlli se nella sequenza le parentesi sono
correttamente annidate e bilanciate (cioè se sono tutte ordinatamente richiuse).
Per semplicità, consideriamo solo le parentesi tonde.

Esempi:

Sequenze corrette: 
a ciao.
b ().
c (ciao)belli.
d ((ciao)(cia(o))(c(i)ao))(bell()i).

Sequenze errate:
e cia)o()belli!ciao.
f c(iao.
g ci(ao)be(lli.
h ci(ao)b(ell(i)!!.
i c(i)ao))((ciao(belli). si noti che qui il numero di ( e di ) è lo stesso!

Suggerimento: si tenga conto man mano di quante sono le parentesi già aperte, e si
decida di conseguenza. A volte si può scoprire che una sequenza è errata anche
prima della fine della sequenza, come nelle sequenze e e i dell’ esempio. In questi
casi non serve attenderne il termine. Nei casi f, g e h occorre invece analizzare la
sequenza fino alla fine per poterla dichiarare errata.
===================================================
*/

#include <stdio.h>
#define sentinella '.'

/*siccome siamo ossessionati per l'ottimizzazione scomponiamo la variabile flag (8 bit)
    * bit inizo --- 1 abbiamo iniziato e non tolleriamo ')', 0 l'utente ha correttamente aperto la prima parentesi

    * bit dedicato alla correttezza o meno del conteggio --- per evitare falsi positivi tipo )))(((

    * '(' + 1
    * ')' -1
    *
    *
    *
    * bit dedicati al conteggio delle parentesi, se il conteggio è diverso da 0 alla fine allora c'è quale parentesi di troppo
*/

int main()
{
    unsigned char c = 0, flag = 128;

    while (c != sentinella && c != 10)
    {
        scanf("%c", &c);

        if (c == ')' && (flag & 128))
        {
            // se flag non è stata modificata all'inizio e abbiamo riscontrato ) allora parentesi sbagliate a prescindere
            flag = 1;
            break;
        }

        if (c == '(') // se il secondo bit è 0, portalo ad 1 per indicare una parentesi aperta da chiudere
        {
            flag = flag & 127; // 01111111, imposta il primo bit a 0, abbiamo immesso almeno una parentesi
            flag = flag | 64;  // 01000000, costringi un 1 al secondo bit utilizzando |
            flag++;            // aumenta il conteggio delle parentesi
        }

        if (c == ')') // se il secondo bit è 1, portalo a 0 per indicare una parentesi chiusa
        {
            flag = flag & 127; // 01111111, imposta il primo bit a 0, abbiamo immesso almeno una parentesi
            flag = flag & 191; // 10111111, costirngi uno 0 al secondo bit utilizzando &
            flag--;            // diminnuisci il conteggio delle parentesi
        }
    }
    //printf("\n%hhu", flag); //vedere per credere

    if(!flag)
        printf("\nParentesi corrette!");
    else if(flag==128)
        printf("\nNon hai inserito parentesi");
    else
        printf("\nParentesi NON corrette!");
    return 0;
}