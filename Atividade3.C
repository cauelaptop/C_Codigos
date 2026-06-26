#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("digite um numero: ");
    scanf("%d", &numero1);

    printf("digite um numero: ");
    scanf("%d", &numero2);

    if (numero1 < numero2) {
        printf("%d %d\n", numero1, numero2);
    }
    else if (numero2 < numero1) {
        printf("%d %d\n", numero2, numero1);
    }
    else { 
        printf("os numeros nao podem ser iguais\n");
    }

    return 0;
}
