#include <stdio.h>

int main()
{
    int A;
    printf("Quale anno ti interessa? \n");
    scanf("%d", &A);

    if ((A > 1582 && !(A % 4)) && !(!(A%100)^!(A%400)))
        printf("%d e' un anno bisestile", A);
    else
        printf("%d NON e' un anno bisestile", A);

    return 0;
}