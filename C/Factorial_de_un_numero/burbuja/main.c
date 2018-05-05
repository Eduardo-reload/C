#include <stdio.h>
int lista [5]= {5,4,3,2,1};


//ORDENAMIENTO BURBUJA


void orden(){
    int i,j,aux;
    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(lista[j]>lista[j+1]){
                aux=lista[j] ;
                lista[j] =lista[j+1];
                lista[j+1] = aux;

            }
        }
    }

}
//asendente
void imprimir(){
    int i;
    for(i=1;i<6;i++){ printf("%i",lista[i]);}}
//desendente
void desen(){
    int i;
    printf("\n");
    for(i=5;i>0;i--){printf("%i",lista[i]);}}


int main() {
    orden();
    imprimir();
    desen();

    getchar();
    return 0;
}