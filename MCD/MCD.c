#include <stdio.h>

int main()
{
    int n, m, x;
    printf("Enter two integers: \n");
    scanf("%d%d", &n, &m);
    if (n < m) x = n; else x = m;
    if (x<0) x=-x;
    
    while ((n % x) || (m % x))
    {
        x--;
    }

    printf("MCD is %d\n", x);
}
