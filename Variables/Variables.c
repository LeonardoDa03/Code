#include <stdio.h>
#include <conio.h>

typedef int bool;
#define true 1
#define false 0

int main()
{
    int a = 1;
    float b = 0;
    int const c = 3;

    printf("\n 4/5 is %d", 4 / 5);
    printf("\n 4.0/5.0 is %f", 4.0 / 5.0);

    if (a > 0)
    {
        printf("\n a positivo");
        printf("\n suca 1");
    }
    else
        printf("\n a negativo o nullo");
    // printf("\n suca 2"); //suca 2 viene scritto a prescindere perchè esle senza {}

    /*NB: l' if senza {} esegue una sola istruzione, per più di una istruzione usare {}*/
    bool Lore = false;

    if (Lore)
        printf("\n Lore e' stupido");
    else
        printf("\n Lore non e' stupido");

    // wait for esc (27)
    while (_getch() != 27)
    {
    }
    return 0;
}
