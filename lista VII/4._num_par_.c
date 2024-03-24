#include <stdio.h>

int main(){
    int i, s = 0;
    printf("Numeros divisiveis por 2 entre 10 e 50:\n");
    for(i = 10; i <= 50; i++){
        if(i % 2 == 0){
            printf("%i\t", i);
            s++;
        }
     }
     printf("\nForam exibidos %i valores", s);
     return(0);
    }