#include <stdio.h>

//modo veloce per confrontare due numeri evitando ripetizioni
int main()
{
    int i = 1, j = 2,c=0;
    for (i; i <= 99; i++)
    {
        for (j = i+1; j <= 99; j++)
        {
            printf("%d e %d \n",i,j);
            c++;
        }
    }
    printf("\n\n %d",c);

    return 0;
}