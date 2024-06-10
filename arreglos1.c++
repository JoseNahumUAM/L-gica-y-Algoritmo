#include<stdio.h>
// <>

int main(){
    int x[3];
    int suma=0;
    printf("Digites los datos del arreglo\n");
    for(int i=0;i<3;i++){
        scanf("%d",&x[i]);
        suma=suma+x[i];
    }
    //Imprimir
    printf("Imrpimiendo el arreglo...");
    for(int i=0;i<3;i++){
        printf("\t%d",x[i]);
    }
    printf("\nLa suma del arreglo es: %d",suma);
    return 0;
}