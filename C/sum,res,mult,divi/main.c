#include <stdio.h>
int primerN,segunN;
int sum = 0,res = 0, multi = 0,divi = 0;

int operaciones (){

    sum = primerN + segunN;
    res = primerN - segunN;
    multi =  primerN * segunN;
    divi = primerN / segunN;

    printf("la suma de los dos numeros es: %i",sum);
    printf("\nla resta de los dos numeros es: %i",res);
    printf("\nla multiplicacion de los dos numeros es: %i",multi);
    printf("\nla divicion de los dos numeros es: %i",divi);

    return 0;
}


int main(){

    printf("Ingrese dos numeros:\n");
    scanf("%i %i",&primerN, &segunN);
    operaciones(primerN,segunN);


    return 0;

}