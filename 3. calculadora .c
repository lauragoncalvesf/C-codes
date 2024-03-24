#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float n1, n2;
    int op;
    printf("CALCULADORA SIMPLES \n");
    printf("1 - ADICAO \n");
    printf("2 - SUBTRACAO \n");
    printf("3 - MULTIPLICACAO \n");
    printf("4 - DIVISAO \n");
    printf("Escolha a operacao:");
    scanf("%i", &op);
    printf("Digite o primeiro valor:");
    scanf("%f", &n1);
    printf("Digite o segundo valor:");
    scanf("%f", &n2);

    switch (op)
    {
    case 1:
        printf("Resultado da adicao e: %.1f", n1 + n2);
    break;
    case 2:
        printf("Resultado da subtracao e: %.1f", n1 - n2);
    break;
    case 3:
        printf("Resultado da multiplicacao e: %.1f", n1 * n2);
    break;
    case 4:
        if(n2 != 0){
        printf("Resultado da divisao e: %.1f", n1 / n2);
        }
        else{
            printf("A divisao e indefinida"); 
        }
    break;
    default:
        printf("A opcao e invalida, tente novamente");
        break;
    }  
    return(0);

}