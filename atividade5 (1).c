#include<stdio.h>
int main(){

int medida1,medida2,medida3 ;

printf("digite a medida 1: ");
scanf("%i", &medida1);
printf("digite a medida 2: ");
scanf("%i", &medida2);
printf("digite a medida 3: ");
scanf("%i", &medida3);

if(medida1==medida2&& medida2==medida3 && medida1==medida3){
printf("isso é um triangulo equilatero");
} else if(medida1==medida2&& medida1!=medida3&& medida2!=medida3){
    printf("você tem um triangulo isoceles");
}else(medida1!=medida2 && medida2!=medida3 && medida1!=medida3);{
    printf("você tem um triangulo escaleno");
}
}