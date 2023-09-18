#include <stdio.h>
#include <stdlib.h>

int main(){

    system("Color A");

    int numero;
    int total;

    printf("-----------------\nDigite um numero par\n-----------------\n\n");
    printf("[!] Numeros impares serao desconsiderados.\n\n");
    printf("-----> ");
    scanf("%d", &numero);

    while(numero%2==0){



     printf("[!] Digite outro numero: ");
     scanf("%d", &numero);
     total ++;

    }

     printf("[!] A quantidade de numeros pares foi: %d", total);



}











