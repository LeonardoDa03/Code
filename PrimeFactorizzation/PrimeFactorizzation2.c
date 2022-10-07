#include <stdio.h>
#include <math.h>

int main(){
    int N,j;
    
    printf("Enter a integer: \n");
    scanf("%d",&N);
    int A[N];
    
    for(int i=2; i<=sqrt(N); i++){
        if (A[i]==0){
            j=i*i;
            while(j<=N){
                A[j]==!A[j];
                j++;
            }
        }
    }

    for(int a=0;a<=N;a++){
        if(A[a]==0){
            printf("\n %d is divisible by %d", N,a);
        }
    }
}