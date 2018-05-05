#include <stdio.h>




void palab(){
    char pal[20];

    printf("Ingrese su nombre:\n ");
    gets(pal);
    printf("%s",pal);


}


void caracter(){
    char le[5]={'r','d','d','d','s'};
    int x;
    for (x = 0;x<5;x++){
        printf("%c",le[x]);
    }


}

void arreFlo(){
    float a[5];
    int i;

    for(i = 0;i<5;i++){
        printf(" Digite 5 numeros con desimal:\n %f ",i+1);
        scanf("%f",&a[i]);}

    for(i=0;i<5;i++){
        printf("\nLos Numeros ingresados son:\n %.2f",a[i]);
    }

}


void arreglos(){
    int i,a[] = {1,2,3,4,5,6,7,8,9,10};

    for(i = 0;i<11;i++){
        printf("%i",a[i]);
    }
}


int main() {
    palab();
    //caracter();
    //arreFlo();
    //arreglos();

    getchar();
    return 0;
}