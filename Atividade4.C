#include <stdio.h>

int main() {
    float nota1, nota2, nota3, soma, media;

    printf("digite nota 1: ");
    scanf("%f", &nota1);

    printf("digite nota 2: ");
    scanf("%f", &nota2);

    printf("digite nota 3: ");
    scanf("%f", &nota3);

    soma = nota1 + nota2 + nota3;
    media = soma / 3;

    printf("o total do aluno é: %.2f \n", soma);
    printf("a media é: %.2f\n", media);

    if (media >= 0 && media < 5) {
        printf("sua nota e: E\n");
    }
    else if (media >= 5 && media < 6) {
        printf("sua nota e: D\n");
    }
    else if (media >= 6 && media < 7) {
        printf("sua nota e: C\n");
    }
    else if (media >= 7 && media < 8) {
        printf("sua nota e: C\n");
    }
    else if (media >= 8 && media < 9) {
        printf("sua nota e: B\n");
    }
    else if (media >= 9 && media <= 10) {
        printf("sua nota e: A\n");
    }

    return 0;
}
