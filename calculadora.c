#include <stdio.h>
//Calculadora para realizar as 4 propriedades basicas da matematica
//tem o intuito de tambem conseguir realizar operações acumulativas 
int main(){
    int operacao;
    float valor,acumulator;

    do{
    printf("\noperacao desejada: ");
    printf("\n1 - adicao\n2 - subtracao\n3 - divisao\n4 - multiplicacao\n0 - sair\n");
    scanf("%d",&operacao);

        switch(operacao){
            case(1):
                printf("** PARA ENCERRAR A OPERACAO DIGITE 0 **");
                printf("\ninsira o valor: ");
                do{
                    scanf("%f", &valor);
                    acumulator+= valor;
                }while(valor != 0 );
                printf("%f", acumulator);
            break;
            case(2):
                printf("** PARA ENCERRAR A OPERACAO DIGITE 0 **");
                printf("\ninsira o valor: ");
                scanf("%f", &valor);
                    acumulator = valor;
                do{
                    scanf("%f", &valor);
                    acumulator -= valor;
                }while(valor != 0 );
                printf("%f", acumulator);
            break;
            case(3):
            printf("** PARA ENCERRAR A OPERACAO DIGITE 0 **");
                printf("\ninsira o valor: ");
                scanf("%f", &acumulator);
                    if(acumulator == 0);
                do{
                    scanf("%f", &valor);
                    if(valor != 0){
                        acumulator/= valor;
                    }
                }while(valor !=0);
                printf("%f", acumulator);
            break;
            case(4):
                printf("** PARA ENCERRAR A OPERACAO DIGITE 0 **");
                printf("\ninsira o valor: ");
                scanf("%f", &acumulator);
                    if(acumulator == 0);
                do{
                    scanf("%f", &valor);
                    if(valor != 0){
                        acumulator*= valor;
                    }
                }while(valor != 0);
                printf("%f", acumulator);
            break;
            default:
            printf("operacao invalida");
            break;
        }
    }while(operacao!= 0);
return 0;}