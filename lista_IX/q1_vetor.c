#include <stdio.h>

int main(){
    int i, a[8];
    for(i = 0; i < 8; i++){
        printf("Digite o %iº valor: ", i + 1);
        scanf("%i", & a[i]);
    }
    printf("\nVetores\n");
    for(i = 7; i >= 0; i--){
        printf("%i\n", a[i]);
    }
    return(0);
}