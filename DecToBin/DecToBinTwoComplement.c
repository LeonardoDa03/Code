#include <stdio.h>
#define NBits 8
int main()
{
    int e = NBits - 1, B = e;
    long long unsigned int pw = 1;
    long signed int N;
    while (e > 0)
    {
        pw = pw * 2;
        e--;
    }
    const long long int MostNegative = -pw;

    printf("%lld\n\n", MostNegative);

    printf("Che numero vuoi convertire?\n");
    scanf("%d", &N);

    // tieni conto del segno
    if (N >= 0)
    {
        printf("%d", 0);
    }
    else
    {
        printf("%d", 1);
        N = N - MostNegative;
        //  il nuovo valore da codificare
    }

    while (B > 0)
    {
        pw = 1;
        e = B;
        while (e > 0)
        {
            pw = pw * 2;
            e--;
        }
        printf("%d", (N * 2 / pw) % 2);
        B--;
    }

    return 0;
}