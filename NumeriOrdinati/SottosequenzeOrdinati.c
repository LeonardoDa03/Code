#include <stdio.h>
#define sentinella 0
int main(){
    unsigned int N, PrN, L=1, Lmax=1;
    scanf("%d",&N);
    PrN=N+1;
    while(N!=sentinella){
        scanf("%d",&N);
        if(PrN<N)
            L++;
        else
            L=1;
        if(L>Lmax)
            Lmax=L;
        PrN=N;
    }
    printf("Lung. Max = %u",Lmax);
    return 0;
}