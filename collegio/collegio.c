#include <stdio.h>
#define alunni 10
#define soglia 8
int main(){
    int voto, ammessi=0, count=0;
    printf("dimmi 1 se ammesso, 2 se respinto per 10 alunni\n");
    while(count<=alunni){
        scanf("%d",&voto);
        if(voto==1){
            ammessi++;
        }
        count++;
    }
    if (ammessi>=soglia)
        printf("\nalza la retta");
    //questo tipo di programma è una struttura annidata (if dentro while)
    return 0;
}