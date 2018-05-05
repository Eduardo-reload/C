#include <stdio.h>


int gradosc;


void pedir(){
    int grados;

    printf("Ingresa los grados Celsius a transformar: \n");
    scanf("%i",&grados);

    gradosc = grados;
}

int transf(){
    int far;

    far = (gradosc*1.8) + 32;
    printf("al trandformar %i ° celsius, quedarian  %i °fahrenheit:",gradosc,far);
    return 0;
}


int main() {
    pedir();
    transf();
    return 0;
}