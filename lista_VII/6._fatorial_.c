#include <stdio.h>

int main(){
    int i, n, fat = 1; 
    printf("======FATORIAL======\n");
    printf("Digite um numero inteiro:\n");
    scanf("%i", &n);
    if(n >= 0){
        for(i = 1; i <= n; i++){
        fat= fat * i;   
    }
    printf("%i! = %i", n, fat);
    } 
    else{
        printf("Nao existe fatorial de numero negativo!");
    }
    return(0);
    }

    


