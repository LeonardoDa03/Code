#include <stdio.h>
#include <conio.h>
#include <math.h>

unsigned char CheckPrime(unsigned long long int N_)
{
    if ((!(N_ & 1) && N_ > 2) || N_ <= 1)
        return 0;
    for (int i = 3; i * i <= N_; i = i + 2)
    {
        if (!(N_ % i))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    unsigned long long int N;
    printf("Enter an integer: ");
    scanf("%llu", &N);

    printf("Is %llu a prime number? %hhu", N, CheckPrime(N));

    return 0;
}
