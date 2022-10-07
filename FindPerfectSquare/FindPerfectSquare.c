#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

// A function to prime factorization
int PrfSq(int n)
{
    int EsC = 0;
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        //printf("%d is divisible by: %d \n", n, 2);
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
            //printf("%d is divisible by: %d \n", n, i);
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
        //printf("you are left with: %d \n", n);
        return 0;
    }

    return 1;
}

/* Driver code */
int main()
{
    int n;
    printf("Enter an integer: ");

    // reads and stores user input
    scanf("%d", &n);

    printf("Is your number a perfect square?: %d \n", PrfSq(n));
    printf("Press esc to exit.\n");
    // wait for esc (27)
    while (_getch() != 27)
    {
    }

    return 0;
}

// This is code is contributed by rathbhupendra
