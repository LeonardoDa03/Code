#include <stdio.h>

#define R 3 // nuemro righe
#define C 2 // numero colonne
#define N 3 //matrice quadrata
int main()
{
    unsigned int a[N][N] = {{3, 1,5}, {9,4,8}, {8,6,3}};
    char i=0,j=0,simm=1;

    while (i<N && simm)
    {
        j=i+1;
        while (j<N && simm)
        {
            if(a[i][j]!=a[j][i])
                simm=0;
            j++;
        }
        i++;
    }

    if (!simm)
        printf("NON ");
    printf("simmetrica");

    return 0;
}