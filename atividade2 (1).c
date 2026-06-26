#include<stdio.h>
int main(){

    float valor;

    printf("digite um numero: ");
    scanf("%f", &valor);
    printf("o sucessor é: %.1f", valor+1);
    printf("\no antecessor: : %.1f\n",valor-1);
}