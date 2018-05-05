#include <stdio.h>

void dividir();
void multiplicar();
void sumar();
void restar();




int main() {
menu();
    return 0;
}




void dividir(){
    int in1,in2,div=0;

    printf("Ingrese dos numeros");
    scanf("%i %i",&in1,&in2);

    div = in1/in2;
    printf("\nEl resultado de la Divicion es\n %i.2",div);

}

void multiplicar(){
    int in1,in2,multi=0;

    printf("Ingrese dos numeros");
    scanf("%i %i",&in1,&in2);

    multi = in1*in2;
    printf("\nEl resultado de la Multiplicacion es\n %i",multi);


}

void restar(){
        int in1,in2,resta=0;

        printf("Ingrese dos numeros");
        scanf("%i %i",&in1,&in2);

        resta = in1-in2;
        printf("\nEl resultado de la Resta es\n %i",resta);
}

void sumar(){
    int in1,in2,suma=0;

    printf("Ingrese dos numeros: \n");
    scanf("%i %i",&in1,&in2);

    suma = in1+in2;
    printf("\nEl resultado de la suma es:\n %i",suma);
}



void menu(){
    int opc;

    do{
        printf("\n>>>>>>>> MENU <<<<<<<<");

        printf("\n1. Sumar");
        printf("\n2. Restar");
        printf("\n3. Multiplicar");
        printf("\n4. Dividir");
        printf("\n5. Salir");
        printf("\n Opcion: ");
        scanf("%i",&opc);

        switch (opc){
            case 1: sumar();break;
            case 2: restar();break;
            case 3: multiplicar();break;
            case 4: dividir (); break;


        }
    }while(opc!=5);




}
