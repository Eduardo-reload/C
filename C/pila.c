#include <stdio.h>
#include <stdlib.h>
//gcc pila2.c -o pila2.exe
typedef struct info{
    int dato1;
} Info;

typedef struct nodo{
    Info *datos;
    struct nodo *siguiente;
} Nodo;


typedef struct pila{
    Nodo *tope;
    int tamano;
} Pila;

Pila* crearPila(){
    Pila *miPunteroPila;
    miPunteroPila = malloc(sizeof( Pila ));
    miPunteroPila->tamano = 0;
    miPunteroPila->tope = NULL;
    miPunteroPila->tope->siguiente = NULL;
    
    return miPunteroPila;
}

int tamanoPila(Pila *laPila){
    return laPila->tamano;
}

void ampilar(Pila *mipila, Info *data){
    //aumentar el tamano
    mipila->tamano = mipila->tamano + 1;
    
    if(mipila->tope == NULL ){
        Nodo *newNodo;
        newNodo = ( Nodo *) malloc(sizeof(Nodo));
        newNodo->datos = ( Info *) malloc(sizeof(Info));
        newNodo->datos = data;
        newNodo->siguiente = NULL;
        mipila->tope = newNodo;
    }else{
    
        Nodo *nodoaux;
        nodoaux = mipila->tope;
    
        Nodo *newNodo;
        newNodo = ( Nodo *) malloc(sizeof(Nodo));
        newNodo->datos = ( Info *) malloc(sizeof(Info));
        newNodo->datos = data;
        mipila->tope = newNodo;
        newNodo->siguiente = nodoaux;
    }
}

int main(){
    Pila *mipila;
    mipila = crearPila();

    printf("Tamaño de mi pila %d \n",tamanoPila(mipila) );
    
    return 0;
}