#include <stdio.h>
    int esPrimo(int N){

    for(int i=2;i<N;i++){
        if(N % i==0){
         return 0;
        }
    }
    return 1;

    }

    int main(){
        int N,resultado;
        scanf("%d",&N);

        resultado = esPrimo(N);

        if(resultado==1){
            printf("Primo\n");

        }else{
            printf("No es primo\n");
        }
         return 0;
    }
