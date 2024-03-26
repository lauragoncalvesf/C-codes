#include <stdio.h>

int main(){
    int cont = 1, i;
    while(cont <= 10){
        printf("Digite a idade da %iª pessoa: ", cont);
        scanf("%i", &i);
        if(i >= 18){
            printf("Essa pessoa e maior de idade!\n");
        }
        else{
            printf("\nEssa pessoa e menor de idade!\n");
        }
        cont++;
    }
    return(0);
}