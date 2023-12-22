#include <stdio.h>
#include <stdlib.h>

int main(void)  {
    
    int tamanhoTabuada = 10;
    int tabuada;
    int multiplica;

    printf("Digite o número que deseja saber a tabuada: ");
    scanf("%d", &tabuada);

    for (int i = 1; i <= tamanhoTabuada; i++) {

        multiplica = tabuada * i;
        printf("%d x %d = %d\n", tabuada, i ,multiplica);
    }  



}  

