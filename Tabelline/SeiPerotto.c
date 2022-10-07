#include <stdio.h>

int main()
{
    int n;
    printf("Quale numero ti interessa? (tra 2 e 12)\n");
    scanf("%d", &n);
    if (n >= 2 && n <= 12)
    {
        printf("Tabellina da ripassare: %d \n", n);
        for (int i = 0; i <= 10; i++)
        {
            printf("%d x %d = %d \n", n, i, (n * i));
        }
    }
    else
    printf("Vattene a pesca\n");
    return 0;
}