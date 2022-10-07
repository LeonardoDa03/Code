#include <stdio.h>
#define sentinella -1
int main(){
    int n=0,s=-sentinella,c=-1;
    printf("inserisci dei valori, -1 per fermare \n");
    while(n!=sentinella){
        scanf("%d",&n);
        s+=n;
        c++;
    }

    printf("media e' %f", (float)s/c);

    return 0;
}