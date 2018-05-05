#include <stdio.h>


int array1[5] ={2,3,4,5,6} ;
int array2[5];


void copiar(int a[], int b[], int tam){
    int x;
    for(x=0;x<5;x++){
        b[x]= a[x];

    }
    for ( x =0;x <tam ;x++) {

        printf("%i",b[x]]);

    }

}


int main() {
    copiar(array1,array2,5);



    getchar();
    return 0;
}