#include <stdio.h>

unsigned char CheckPrime(unsigned long long int N_)
{
    if ((!(N_ & 1) && N_ > 2) || N_ <= 1)
        return 0;
    for (unsigned long int i = 3; i*i <= N_; i = i + 2)
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
    unsigned long long int N = 2;
    while (N > 0)
    {
        if (CheckPrime(N))
            printf("%llu\n", N);
        N++;
    }
    return 0;
}
