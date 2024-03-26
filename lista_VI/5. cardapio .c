#include <stdio.h>

int main (){
    int cod, quant;
    float val;
    printf(" COD DO ITEM          ESPECIFICACAO         PRECO UNIT\n");
    printf("------------------------------------------------------\n");
    printf("    100               CACHORRO QUENTE        8,00 \n");
    printf("    101                 BAURU                9,00 \n");
    printf("    102               X-SALADA              10,00 \n");
    printf("    103               HAMBURGUER            12,00 \n");
    printf("    104               REFRI(LATA)            3,00 \n");
    printf("Digite o codigo do item voce deseja: \n");
    scanf("%i", &cod);
    printf("Digite a quantidade desejada: \n");
    scanf("%i", &quant);

    switch (cod)
    {
    case 100:
        val = 8.00;
        val = quant * val;
    break;
    case 101:
        val = 9.00;
        val = quant * val;
    break;
    case 102:
        val = 10.00;
        val = quant * val;
    break;
    case 103:
        val = 12.00;
        val = quant * val;
    break;
    case 104:
        val = 3.00;
        val = quant * val;
    break;
    default:
    printf("Escolheu a opcao invalida, tente novamente!");
        break;
    }
    printf("O valor a ser pago: %.2f", val);
    return(0);
}