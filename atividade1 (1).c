#include<stdio.h>
int main(){

    float valor;

    printf("digite um valor em metros: ");
    scanf("%f", &valor);
    printf("o valor em centimetros é igual a: %.2f", valor*100);
    printf("\no valor em metros é igual: %.1f",valor);
    printf("\no valor em milimetros é igual: %.2f",valor*1000);

    
}