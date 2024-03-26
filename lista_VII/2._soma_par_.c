#include <stdio.h>

int main(){
    int num, som;
    som = 0;
    num = 1; 
    while (num <= 500)
    {
        if(num % 2 == 0){
            som = som + num;
        }
        num++; 
    }
    printf("A soma dos numeros e: %i", som);
    return(0);    
}