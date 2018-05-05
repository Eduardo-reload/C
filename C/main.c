#include <stdlib.h>
#include <stdio.h>
#include




typedef struct info{
	int numero;
	
}Info;

typedef struct nodo{
	Info*dato;
	struct nodo *sig;
	
}Nodo;


typedef struct lista{
	Nodo *inicio;
	Nodo *fin;
	int tam;
}Lista;


Lista *creaLista() {
	Lista *nuevo;

	if(nuevo = (Lista *) malloc(sizeof(Lista)!=NULL){
			nuevo->tamano = 0; // Lista vacía
			nuevo->inicio = nuevo->fin = NULL; // Inicio y Fin apuntan a NULL
		}return nuevo;
}





bool buscar(Nodo *i,intx){
	if(i!=NULL){
		if(x==i->dato->numero){
			buscar(i->sig,x);
		}
	}return false;
	
}


void recorrerL(Nodo*i){
	if(i!=NULL){
		print("%d",i->dato->numero);
		recorrerL(i->sig);
	}else{
		printf("\n");
	}
	
}


int main(){
	Lista ();
	

	if(buscar(L->inicio,3)){
		printf("Se encuentra valor ingresado");
	}else{
		printf("No se encuentra valor");}
		
		

	getchar();
return 0;
}
