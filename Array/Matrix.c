#include <stdio.h>

#define R 3 // nuemro righe
#define C 2 // numero colonne

int main()
{
    unsigned int a[R][C] = {{2, 1}, {5, 7}, {9, 4}};
    char r, c;

    /*
    2   1
    5   7
    9   4
    */

    for (r = 0; r < R; r++)
    {
        for (c = 0; c < C; c++)
        {
            printf("%2u", a[r][c]);
        }
        printf("\n");
    }
    
    return 0;
}