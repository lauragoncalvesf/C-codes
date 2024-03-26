#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int cont;
    printf("Cont 0 a 10: \n");
    for(cont = 0; cont <=10; cont++){
        printf("%i", cont);
    }
    return(0);
}