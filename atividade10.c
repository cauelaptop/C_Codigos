#include<stdio.h>
int valor(int veiculo, int dia){



    float preco, total, eixo, subtot;


            switch(veiculo){
                     case 1:
                    preco=5;
                    if(dia==1){
            total=((20/100)*preco)+preco;
                }else {
                total=preco;
                            };  
        printf("\ntotal: %.2f", total,"\n");
    break;



                    case 2:
                 preco=2.5;
                 if(dia==1){
            total=((20/100)*preco)+preco;
                }else{
                total=preco;
                             };
        printf("\ntotal: %.2f", total,"\n");
    break;



                case 3:
            preco=10;
     printf("quantos eixos tem seu caminhão: ");
            scanf("%f", &eixo);
                    if(eixo<=2){
                    eixo=0;
                }else {
                total=preco;
                            };
                    if(dia==1){
                total=(((20/100)*preco)+preco)+subtot;
                }else {
                total=preco;
                            };
            printf("\ntotal: %.2f", total,"\n");
        break;


        
                case 4:
            preco=8;
            if(dia==1){
        total=((20/100)*preco)+preco;
            }else {
            total=preco;
                        };
        printf("\ntotal: %.2f", total,"\n");
    break;
    }
}



int main(){
    int veiculo, dia;

    printf("Selecione o veiculo:\n");
    printf(" 1= carro valor 5 reais\n");
    printf("2= moto valor 2,50 reais \n");
    printf("3= caminhão valor 10 reais+2,50 cada eixo \n");
    printf("4= onibus valor 8 reias \n digite aqui:");
    scanf("%d", &veiculo);
    printf("Hoje é final de semana ou um feriado? \n 1=Sim \n 2=Nao \n digite aqui: ");
    scanf("%d", &dia);

    valor(veiculo, dia);
}