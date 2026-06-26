#include<stdio.h>
int main(){

    float valor,acrecimo,resultado;

     printf("digite seu salario: ");
    scanf("%f", &valor);

    printf("quanto é o acrecimo em porcentagens: ");
    scanf("%f", &acrecimo);

     resultado= valor+valor*(acrecimo/100);

    printf("o valor é igual: %.1f",resultado);

}

