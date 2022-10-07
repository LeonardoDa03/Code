#include <stdio.h>

int main(){
    int a,b, i=1, j=1;
    printf("inserisci a e b\n");
    scanf("%d%d",&a,&b);
    printf("\n");
    while(i<=a){
        while(j<=b){
            printf("<%d,%d>\n",i,j);
            j++;
        }
        j=1;
        printf("\n");
       i++; 
    }
    return 0;
}