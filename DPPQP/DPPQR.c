#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
// una coppia di numeri consecutivi è speciale se: diversi, pari, e il loro prodotto è un quadrato perfetto
int PrfSq(int n)
{
    int EsC = 0;
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        // printf("%d is divisible by: %d \n", n, 2);
        n = n / 2;
        EsC++;
    }

    if (EsC % 2 != 0)
    {
        return 0;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        EsC = 0;
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            // printf("%d is divisible by: %d \n", n, i);
            n = n / i;
            EsC++;
        }

        if (EsC % 2 != 0)
        {
            return 0;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
    {
        // printf("you are left with: %d \n", n);
        return 0;
    }

    return 1;
}

int dppqp(int a, int b)
{
    if ((a != b) && (a % 2 == 0) && (b % 2 == 0) && PrfSq(a * b))
    {
        return 1;
    }
    return 0;
}

int *arr;
size_t arrSize = 0;

int main()
{
    int element;
    arr = calloc(arrSize, sizeof(int));
    if (arr == NULL)
    {
        printf("Array not allocated");
        return 404;
    }

    // welcome user
    printf("Enter a list of integer, one by one, 0 to stop: \n");

    while (1)
    {
        scanf("%d", &element);
        arrSize++;
        arr = realloc(arr, arrSize * sizeof(int));

        if (arr == NULL)
        {
            printf("Array not reallocated");
            return 404;
        }

        arr[arrSize - 1] = element;

        if (element == 0)
        {
            break;
        }
    }

    printf("\n");

    int SpC=0;
    for (int i = 0; i < (arrSize - 1); i++)
    {
        if ( dppqp(arr[i], arr[i + 1]) )
        {
            SpC++;
            printf("%d and %d is a special couple\n", arr[i], arr[i + 1]);
        }
    }
    printf("\nthere are %d special couples in your list \n", SpC);

    // greet user
    printf("\nPress esc to exit.\n");
    // wait for esc (27)
    while (_getch() != 27)
    {
    }

    free(arr);
    return 0;
}