#include <stdio.h>

int main(){
    int cont;
    printf("Contagem de 500 a 0:\n");
    for(cont = 500; cont >= 0; cont--)
    {
        printf("%i\t", cont);
     }
    return(0);
}