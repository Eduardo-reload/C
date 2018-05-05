#include <stdio.h>

int catAD, catOP, Hip,valor ;

void ingresoD(){

    int ingreA;
    int ingreO;

    printf("ingrese el valor del cateto adyacente y cateto opuesto \n");
    scanf("%i %i",ingreA,ingreO);

    catAD = ingreA;
    catOP = ingreO;

}

int operaci(){
     int multi,multiA;

     multi = catAD * catAD;

     multiA = catOP * catOP;
     valor = 1/2*(multi+multiA);
     valor;
     printf("EL valor del la hipotenusa es: %i",valor);

     return  0;
}

int main() {

    ingresoD();
    operaci();

    return 0;
}