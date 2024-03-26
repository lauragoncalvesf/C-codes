#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int cont = 1;
    printf("Contagem de 0 a 10:\n");
    while(cont <= 10){
        printf("%i", cont);
        cont++;
    }
    return(0);
}