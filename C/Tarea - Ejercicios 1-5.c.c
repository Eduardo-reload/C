#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef struct info{
   int num;
   char nombre[30];
}Info;

typedef struct nodo{
   Info *dato;
   struct nodo *sgte;
}Nodo;

typedef struct lista{
   Nodo *ini;
   Nodo *fin;
   int tam;
}Lista;


void insertarElemento(Lista *plis,int pval,char pnombre[]){

    Info *newInfo;
    Nodo *newNodo;
    newInfo=(Info *)malloc(sizeof(Nodo));
    if (newNodo=(Nodo *)malloc(sizeof(Nodo))){
        newInfo->num=pval;
        strcpy(newInfo->nombre,pnombre);
        newNodo->dato=newInfo;
        newNodo->sgte=NULL;
        if(plis->tam==0){
            plis->ini=newNodo;
            plis->fin=newNodo;
        }else{
            newNodo->sgte=plis->ini;
            plis->ini=newNodo;
        }
        plis->tam++;
    }else{
        printf("ERROR: MEMORIA NODO NO ASIGNADA");
    }
    
}

Lista *crearLista(){
    Lista*lis;
    if(lis=malloc(sizeof(Lista))){
        lis->ini=NULL;
        lis->fin=NULL;
        lis->tam=0;
    }else{
        printf ("ERROR: MEMORIA LISTA NO ASGNADA");
    }
    return lis;
}

void recorrerLista(Lista *plis){
	
    Lista *L;
    L = crearLista();
    Nodo *aux;
    aux=plis->ini;
    while(aux!=NULL){
        printf ("%s\n",aux->dato->nombre);
        printf ("%i\n",aux->dato->num);
        aux=aux->sgte;
    }
}

int eliminarNodo(Lista *plis, int valor){
    Nodo *aux=plis->ini;
    Nodo *auxE;
    int eliminado=0;
    if(valor==aux->dato->num){
        auxE=aux;
        plis->ini=aux->sgte;
        plis->tam--;
        auxE->sgte=NULL;
        eliminado=1;
        free(auxE->dato);
        free(auxE);
    }
    else{
        while(aux->sgte!=NULL && eliminado!=1){
            if(aux->sgte->dato->num!=valor){
                aux=aux->sgte;
            }
            else{
                auxE=aux->sgte;
                aux->sgte=aux->sgte->sgte;
                plis->tam--;
                auxE->sgte=NULL;
                eliminado=1;
                free(auxE->dato);
                free(auxE);
            }
        }
    }
    return eliminado;
}

void destruirLista(Lista *plis){
    Nodo *aux;
    while (plis->ini!=NULL){
        aux=plis->ini;
        plis->ini=plis->ini->sgte;
        free(aux);
    }
    free(plis);
}


void funcion2(Lista *plis,int pval,char pnombre[]){
	Info *newInfo;
    Nodo *newNodo;
    newInfo=(Info *)malloc(sizeof(Nodo));
    if (newNodo=(Nodo *)malloc(sizeof(Nodo))){
        newInfo->num=pval;
        strcpy(newInfo->nombre,pnombre);
        newNodo->dato=newInfo;
        newNodo->sgte=NULL;
        if(plis->tam==0){
            plis->ini=newNodo;
            plis->fin=newNodo;
        }else{
            newNodo->sgte=plis->ini;
            plis->ini=newNodo;
        }
        plis->tam++;
	}
	
}

void funcion3(Lista *plis,int pval,char pnombre[],int numero){
	Nodo *aux;
    aux=plis->ini;
    while(aux!=NULL){
		if (aux->dato->num==numero){
			    Info *newInfo;
			    Nodo *newNodo;
			    newInfo=(Info *)malloc(sizeof(Nodo));
			    if (newNodo=(Nodo *)malloc(sizeof(Nodo))){
			        newInfo->num=pval;
			        strcpy(newInfo->nombre,pnombre);
  					newNodo->dato=newInfo;
        			newNodo->sgte=NULL;
        			if(plis->tam==0){
			            plis->ini=newNodo;
			            plis->fin=newNodo;
			        }else{
			            newNodo->sgte=plis->ini->sgte;
			            plis->ini->sgte=newNodo;
			        }
				}			
		}
		aux=aux->sgte;
		

    }
	
}



int funcion4(Lista *plis){
    Lista *L;
    L = crearLista();
    Nodo *aux;
    aux=plis->ini;
    int suma=0,cont=0;
    while(aux!=NULL){
        suma=aux->dato->num+suma;
        cont++;
        aux=aux->sgte;
    }
    return suma/cont;
}
	


void funcion5(Lista *plis){
	Lista *L;
    L = crearLista();
    Nodo *aux;
    aux=plis->ini;
    int valor;
    while(aux!=NULL){
       
        if (aux->dato->num>valor){
        	valor=aux->dato->num;
		}
        aux=aux->sgte;
    }
    eliminarNodo(plis,valor);
    
}


int main(int argc, char *argv[])
{
    Lista *L;
    L = crearLista();

    insertarElemento(L,15,"pepe");
    insertarElemento(L,5,"javi");
    insertarElemento(L,30,"fran");
    insertarElemento(L,10,"peter");
    insertarElemento(L,8,"scott");
 
    funcion2(L,20,"ale");
    funcion3(L,19,"rene",10);
    funcion4(L);
    funcion5(L);
    
    recorrerLista(L);
  
    if (eliminarNodo(L, 15)){
    	printf("Eliminado\n");
    }else{
        printf("No se encontró\n");
    }
    if (eliminarNodo(L, 30)){
    	printf("Eliminado\n");
    }else{
        printf("No se encontró\n");
    }
    if (eliminarNodo(L, 30)){
    	printf("Eliminado\n");
    }else{
        printf("No se encontró\n");
    }
    destruirLista(L);

	return 0;

}


int Tareaa(Lista *plis, int valor){
    Nodo *aux=plis->ini;
    Nodo *auxE;
    int eliminado=0;
    if(valor==aux->dato->num){
        auxE=aux;
        plis->ini=aux->sgte;
        plis->tam--;
        auxE->sgte=NULL;
        eliminado=1;
        free(auxE);
    }
    else{
        while(aux->sgte!=NULL && eliminado!=1){
            if(aux->sgte->dato->num!=valor){
                aux=aux->sgte;
            }
            else{
                auxE=aux->sgte;
                aux->sgte=aux->sgte->sgte;
                plis->tam--;
                auxE->sgte=NULL;
                eliminado=1;
                free(auxE);
            }
        }
    }
    return eliminado;
}



