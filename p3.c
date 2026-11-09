#include <stdio.h>
    int buscar(int arreglo[],int tamano,int NumeroaBuscar){

        for(int i=0;i<tamano;i++){
            if(arreglo[i]==NumeroaBuscar){

            return i;
            }
        }
        return -1;
    }

    int main(){
        int N,posicion,NumeroaBuscar;
        scanf("%d",&N);
        int arreglo[N];

        for(int i=0;i<N;i++){
            scanf("%d",&arreglo[i]);
        }

    scanf("%d",&NumeroaBuscar);

    posicion = buscar(arreglo,N,NumeroaBuscar);

    if(posicion == -1){
        printf("-1\n");

    }else{
        printf("%d\n",posicion);
    }

    return 0;

 }
