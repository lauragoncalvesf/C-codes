#include <stdio.h>
#include <locale.h>

void verifica(int p);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a;
    printf("Digite um número:");
    scanf("%i", &a);
    verifica (a);
    return(0);
}

void verifica(int p){
    if(p == 0){
        printf("O número %i é igual a 0", p);
    }
    else{
        printf("O número %i não é igual a 0\n", p);
    }
}