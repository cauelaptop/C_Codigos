#include <stdio.h>

int main(){

float graus,grausfarenheit,grauskelvin;
printf("Digite a temperatura em graus Celsius: ");
scanf("%f", &graus);

grausfarenheit = (graus * 9.0/5.0) + 32;
grauskelvin = graus + 273.15;

printf("A temperatura em Fahrenheit é: %.2f\n", grausfarenheit);
printf("A temperatura em Kelvin é: %.2f\n", grauskelvin);

if (graus < 0) {
    printf("água congelada\n");
} 
else if (graus == 0) {
    printf("água congelada\n");
} 
else if (graus > 0 && graus < 100) {
    printf("água líquida\n");
}
else {
    printf("água em ebulição\n");
}
return 0;
}