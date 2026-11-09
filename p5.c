#include <stdio.h>
    int sumar(int a,int b){

        return a+b;
    }

    int restar(int a,int b){

        return a-b;
    }

    int multiplicar(int a,int b){

        return a*b;
    }

    int dividir(int a,int b){

        return a/b;
    }

    int main(){
        int a,b;
        char operador;

        scanf(" %c",&operador);
        scanf("%d",&a);
        scanf("%d",&b);

        switch(operador){

        case '+':
            printf("%d\n",sumar(a,b));
            break;

        case '-':
            printf("%d\n",restar(a,b));
            break;

        case '*':
            printf("%d\n",multiplicar(a,b));
            break;

        case'/':
            if(b==0){
                printf("Error: division por cero\n");

            }else{
                printf("%d\n",dividir(a,b));
            }
            break;

            }

            return 0;
    }
