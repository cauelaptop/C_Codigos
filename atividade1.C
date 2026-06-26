#include <stdio.h>

int main() {

float numero;

printf("digite um numero: ");
scanf("%f", &numero);

if(numero>0){
printf("numero positivo");
}

else if(numero<0){
    printf("numero negativo");
}

else{
    printf("nulo");
}

    return 0;

}