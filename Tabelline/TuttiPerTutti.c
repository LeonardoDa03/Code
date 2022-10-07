#include <stdio.h>

int main()
{
    int n, k, i, j;
    printf("fornisci n e k da moltiplicare\n");
    scanf("%d%d", &n, &k);
    printf("\n     ");
    for (i = 0; i <= k; i++)
    {
        printf("%4i", i);
    }
    printf("\n      ---");
    for (i = 0; i < k; i++)
    {
        printf("----");
    }
    printf("--\n");

    for(j=2;j<=n;j++){
        printf("%3i :",j);
        for(i=0;i<=k;i++){
            printf("%4i",j*i);
        }
        printf("\n");
    }
    return 0;
}