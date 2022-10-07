#include <stdio.h>
int MCD(int m, int n)
{
    if (n<0) n=-n;
    if (m<0) m=-m;
    
    while (m != n)
    {
        if (n > m)
            n -= m;
        else
            m -= n;
    }
    return n;
}

int main()
{
    int i, j;
    scanf("%d%d", &i, &j);
    printf("MDC of %d and %d is %d", i, j, MCD(i, j));
    return 0;
}
