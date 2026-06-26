#include <stdio.h>


int valor(){
    float valor;

    printf("Digite um numero para efetuar a tabuada: ");
    scanf("%f", &valor);

    for (float i = 0 ; i < 11; i++){
        float r = valor+i;
        printf("%f+%f= %f\n",valor,i, r);}

    for (float i = 0 ; i < 11; i++){
        float r = valor-i;
        printf("%f-%f= %f\n",valor, i, r);}
    
    for (float i = 0 ; i < 11; i++){
        float r = valor*i;
        printf("%fx%f= %f\n",valor, i, r);}

    for (float j = 0 ; j < 11; j++){
        float r = valor/j;
        printf("%f/%f= %f\n", valor, j, r);}
}

int main(){
    valor();


}