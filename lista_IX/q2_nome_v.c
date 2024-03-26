#include <stdio.h>

int main(){
    char nome[50], i;
    printf("Digite seu nome completo:");
    gets(nome); 
    for(i = 0; nome[i] != '\0'; i++);
    printf("Olá, %s!\n", nome);
    printf("A quantidade de caracteres em seu nome é: %i\n", i);
    return(0);
}


/*OU
int main(){
    char nome[50];
    int i, cont = 1;
    printf("Digite o seu nome: ");
    gets(nome);
    for(i = 0; nome[i] != '\0'; i++){
        cont++;
    }
    printf("Seu nome possui %i caracteres", cont);
}*/