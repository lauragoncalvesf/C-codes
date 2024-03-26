#include <stdio.h>

int main(){
    int i;
    float n1, n2, n3, m;
    for(i = 1; i <= 10; i++){
        printf("______%iª ALUNO(a)______\n", i);
        printf("1ª NOTA:\n");
        scanf("%f", &n1);
        printf("2ª NOTA:\n");
        scanf("%f", &n2);
        printf("3ª NOTA:\n");
        scanf("%f", &n3);
        m = (n1 + n2 + n3) / 3; 
        printf(">>>MEDIA: %.1f\n", m);
        if(m >= 9){
            printf("CONCEITO: A\n\n");
        } else if ((m >= 7) && (m < 9)){
            printf("CONCEITO: B\n\n");
        } else if ((m >= 6) && (m < 7)){
            printf("CONCEITO: C\n\n");
        } else if ((m >= 4) && (m > 6)){
            printf("CONCEITO: D\n\n");
        } else {
            printf("CONCEITO: E\n\n");
            }
        }
    return(0);
}