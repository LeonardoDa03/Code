#include <stdio.h>

int main(){
    unsigned int N,n,d=2,St=2;
    printf("fornisci un N\n");
    scanf("%u",&N);
    n=N;
    printf("\n\nN e' divisibile per\n");
    printf("%2i",d);

    while(d*St<=N){
        if(!n%d)
            St=d;
        d++;
    }
    
    while (d*2<=N)
    {
        while (n%d)
        {   
            n=n/d;
        }
        d++;
    }
    
    return 0;
}