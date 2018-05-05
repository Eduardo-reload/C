#include <stdio.h>

int a[5] ={3,5,2,4,1};
char b[5] ={'e','o','u','a','i'};
int x,po,au;
int i,pos,aux;

void orden(){
    for(i=0;i<5;i++){
        pos =i;
        aux= a[i];
        while((pos>0)&&(aux < a[pos-1])){
            a[pos] = a[pos-1];
            pos--;
        }
        a[pos] = aux;
    }}

void ordenCaracter(){
    for(x=0;x<5;x++){
        po = x;
        au= b[x];
        while((po>0)&&(au < b[po-1])){
            b[po] = b[po-1];
            po--;
        }
        b[po] = au;
    }
}

void ascendente(){
    printf("----------Asendente----------\n");
    for(i=0;i<5;i++){printf("%i",a[i]);}
}
void desendente(){
    printf("----------Asendente----------\n");
    for(i=4;i>=0;i--){printf("%i",a[i]);}
}

void ascendenteC(){
    printf("----------Asendente----------\n");
    for(x=0;x<5;x++){printf("%c",b[x]);}
}
void desendenteC(){
    printf("----------Asendente----------\n");
    for(x=4;x>=0;x--){printf("%c",b[x]);}
}

int main() {

    orden();
    ascendente();
    printf("\n");
    desendente();
    printf("\n");
    ordenCaracter();
    ascendenteC();
    printf("\n");
    desendenteC();


    getchar();


    return 0;
}