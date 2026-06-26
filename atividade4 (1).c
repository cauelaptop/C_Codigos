#include<stdio.h>
int main(){

    float peso, altura, resultado;

    
    printf("digite uma altura em centimetros: ");
    scanf("%f", &altura);
    printf("digite um peso em kg:  ");
    scanf("%f", &peso);

    resultado = peso/(altura*altura);

    if(resultado<18.5){
    printf("Você está abaixo do peso");
}
    else if(resultado > 18.5 && resultado <= 24.9){
    printf("você está com o peso normal");
}
    else if (resultado>= 25 && resultado<= 29.9){
    printf("você está com sobre peso");
}
    else if(resultado>=30 && resultado<= 34.4){
    printf("você está com obesidade I");
}
    else if(resultado>=35 && resultado<= 39,9){
    printf("você está com obesidade II");
}
    else{
    printf("você está com obesidade III");}
}