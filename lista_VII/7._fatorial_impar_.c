#include <stdio.h>

int main(){
    int f=1, i, a;
    printf("===FATORIAL IMPAR===\n>> 1 a 11\n");
    for (i = 1; i <= 11; i= i + 2)
    {
        f = 1;
        for (a = 1; a <= i; a++)
        {
            f = f * a;        
        }
        printf("%i! = %i\n", i, f);
    }
    return(0);
}      