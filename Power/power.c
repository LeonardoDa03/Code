#include <stdio.h>

int main(){
    int b,e;
    int pw=1;
    printf("inserisci base e esponente\n");
    scanf("%d%d",&b,&e);
    while(e>0){
        pw=pw*b;
        e--;
    }
    printf("\n%llu",(long unsigned)pw);
    return 0;
}