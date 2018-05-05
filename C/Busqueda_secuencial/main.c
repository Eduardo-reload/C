#include <stdio.h>

int a[5]={3,2,1,4,5};
char band = 'F';
int i,dato;


int buscar(){
    dato = 4;

    i=0;
    while ((band =='F')&&(i<5)){
        if(a[i]== dato){band ='V';}
        i++; }
    if(band=='F'){
        printf("El numero no existe en el arreglo");
    }else{if(band=='V'){
        printf("El numero existe");}}
    return 0;
}


int main() {

    buscar();

    getchar();
    return 0;
}