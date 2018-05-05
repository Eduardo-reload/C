#include <stdio.h>
void lectura();
int numero,x;


void lectura(){
    printf("Ingrese un numero:\n ");
    scanf("%i",&numero);
}

int compru(int  num){
    if(numero%2==0){
        return 0;
        }else{return 1;}

}
int  indi(int x) {
    x = compru(numero);
    if (x == 0) { printf("\n El numero ingresado es PAR "); }
    else { printf("El numero es IMPAR"); }
    return  x;
}

int main() {
    lectura();
    compru(numero);
    indi(x);

    return 0;
}