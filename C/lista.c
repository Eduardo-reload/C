#include <stdio.h>
#include <stdlib.h>
//gcc pila.c -o pila.exe
typedef struct info{
    int dato1;
} Info;

typedef struct nodo{
    Info *datos;
    struct nodo *siguiente;
} Nodo;


typedef struct lista{
    Nodo *inicio;
    Nodo *fin;
    int tamano;
} Lista;

//Se pide como parametro la Lista
void mostrar(Lista *miLista){
    Nodo *nodo;
    nodo = miLista->inicio;
    while( nodo != NULL ) {
        printf ( " %d " , nodo->datos->dato1);
        nodo = nodo->siguiente;
    }
}

//Se pide como parametro el primer nodo de la Lista
void mostrarInverso(Nodo *nodo){
    if(nodo != NULL){
        mostrarInverso(nodo->siguiente);
        printf("%d ", nodo->dato->dato1);
    }
}

void eliminarIesimo(Lista *miLista, int i){
    Nodo *nodo;
    nodo = miLista->inicio;
    
    if(i = 1){
        if(miLista->tamano > 1){
            miLista->inicio = miLista->inicio->siguiente;
        }else{
            miLista->inicio = NULL;
            miLista->final = NULL;
        }
        miLista->tamano--;
    }else{
        int cont = 1;
        while(cont != i-1){
            nodo = nodo->siguiente;
        }
        Nodo *aux;
        aux = nodo->siguiente;
        
        nodo->siguiente = aux->siguiente;
        free(aux->datos);
        free(aux);
        if(nodo->siguiente == NULL){
            miLista->fin = nodo;
        }
        miLista->tamano--;
        
    }
    
}