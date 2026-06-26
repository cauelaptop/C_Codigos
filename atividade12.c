#include <stdio.h>

int main()
{
    int quanti[5];
    char nome[5][10];

    for (int valores = 1; valores < 6; valores++)
    {
        printf("digite o nome do produto: ");
        scanf("%s", nome[valores]);
        printf("digite a quantidade: ");
        scanf("%d", &quanti[valores]);
        resultado(quanti,nome);
    }
}
int resultado(){

 printf("Cod\t|\tnome\t|\tquantidade\t|\n");
    for (int valores = 1; valores < 6; valores++)
    {
        printf("%d\t|\t%s\t|\t%d\t|\n", valores, nome[valores], quanti[valores]);
    }
    return 0;

}