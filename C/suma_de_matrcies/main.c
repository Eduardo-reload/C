#include <stdio.h>

int matrizUNO[2][2] ={{2,1},{1,2}};
int matrizDOS[2][2] = {{1,2},{2,1}};

int sumar(int a[2][2], int b[2][2]){

    int suma[2][2];

    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++) {
            suma[i][j]=a[i][j]+ b[i][j];
            printf("%i",suma[i][j]);
        }
        printf("\n");
    }

}


int main() {
    sumar(matrizUNO,matrizDOS);

    getchar();
    return 0;
}