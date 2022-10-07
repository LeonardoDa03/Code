#include <stdio.h>
#define alunni 10

int main()
{
    int n, s = 0, c = 1;

    printf("inserisci 10 voti \n");
    while (c <= alunni)
    {
        scanf("%d", &n);
        s = s + n;
        c++;
    }
    printf("\n media e' %f", s/10.000);
    return 0;
}