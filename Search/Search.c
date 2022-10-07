#include <stdio.h>
#include <conio.h>
// 6 un bimbo se (non) usi le variabili globali
/*
if (VariabiliGlobali == 1)
{
    Leo = "Bimbo"
}
else
{
    Leo = "Pro Player"
}*/

int s = 1;               // search variable
int N = 2000000000;      // size of database
const int n = 190000000; // desired value
int nC = 0;              // number of comparisons
int LinearSearch();
int BinarySearch();

int main()
{
    printf("database size: %d \n", N);
    printf("desired data: %d \n \n", n);

    printf("Linear search done in: %d \n", LinearSearch());
    printf("Binary search done in: %d \n", BinarySearch());

    // greet user
    printf("Press esc to exit.\n");
    // wait for esc (27)
    while (_getch() != 27)
    {
    }
    return 0;
}

int LinearSearch()
{
    while (s <= N)
    {
        nC++;
        if (s == n)
        {
            return nC;
        }
        s++;
    }

    return -1;
}

int BinarySearch()
{
    nC = 0;
    s = 0;
    while ((N - s) > 3)
    {
        nC++;
        if (n >= ((s + N) / 2))
        {
            s = (s + N) / 2;
        }
        else
        {
            N = (s + N) / 2;
        }
    }
    LinearSearch();
}