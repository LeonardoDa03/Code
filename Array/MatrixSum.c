#include <stdio.h>

#define R 3 // nuemro righe
#define C 2 // numero colonne

int main()
{
    unsigned int a[R][C] = {{2, 1}, {5, 7}, {9, 4}}, b[R][C];

    char r, c;

    for (r = 0; r < R; r++)
    {
        for (c = 0; c < C; c++)
        {
            scanf("%u",&b[r][c]);
            //printf("%2u", a[r][c]);
        }
        //printf("\n");
    }

    /*
    2   1
    5   7
    9   4
    */
    printf("\na=:\n");
    for (r = 0; r < R; r++)
    {
        for (c = 0; c < C; c++)
        {
            printf("%3u", a[r][c]);
        }
        printf("\n");
    }

    printf("\nb=:\n");
    for (r = 0; r < R; r++)
    {
        for (c = 0; c < C; c++)
        {
            printf("%3u", b[r][c]);
        }
        printf("\n");
    }

    printf("\na+b=:\n");
    for (r = 0; r < R; r++)
    {
        for (c = 0; c < C; c++)
        {
            printf("%3u", a[r][c]+b[r][c]);
        }
        printf("\n");
    }

    return 0;
}