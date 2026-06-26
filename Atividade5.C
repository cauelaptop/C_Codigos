#include <stdio.h>
#include <math.h>

int main() {
    
    int escolha;
    double numero1, numero2;
    
    printf("menu de opções \n 1-soma\n 2-subtracao\n 3-multiplicacao \n 4-divisao\n 5-raiz quadrada\n"); 
   
    printf("escolha uma operacao: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("digite o numero1: ");
        scanf("%lf", &numero1);
    
        printf("digite o numero2: ");
        scanf("%lf", &numero2);
      
        printf("a soma da conta é: %.2lf\n", numero1 + numero2);
    } 
    else if (escolha == 2) {
        printf("digite o numero1: ");
        scanf("%lf", &numero1);
    
        printf("digite o numero2: ");
        scanf("%lf", &numero2);
      
        printf("a sub da conta é: %.2lf\n", numero1 - numero2);
    }
    else if (escolha == 3) {
        printf("digite o numero1: ");
        scanf("%lf", &numero1);
    
        printf("digite o numero2: ");
        scanf("%lf", &numero2);
      
        printf("a multi da conta é: %.2lf\n", numero1 * numero2);
    }
    else if (escolha == 4) {
        printf("digite o numero1: ");
        scanf("%lf", &numero1);
    
        printf("digite o numero2: ");
        scanf("%lf", &numero2);
      
        printf("a divi da conta é: %.2lf\n", numero1 / numero2);
    }
    else if (escolha == 5) {
        printf("Digite um número: ");
        scanf("%lf", &numero1);

        printf("A raiz quadrada é: %.2lf\n", sqrt(numero1));
    }
    
    
else

printf("operacao inexistente");
    return 0;
}
