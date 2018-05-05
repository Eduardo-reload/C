#include <stdio.h>
#include <malloc.h>
//Prototipos




void cuentaR(int numero){
    printf("%i",numero);

    if(numero>0){cuentaR(numero-1);}

}

int fac(int num){
    if(num == 0){
        return 1;
    } else{ return (num*fac(num-1));}}




int main() {
    cuentaR(10);

    printf("\n");
    printf("%i",fac(8));


    getchar();
    return 0;
}

