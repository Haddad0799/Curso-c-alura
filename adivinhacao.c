#include <stdio.h>
#include <stdlib.h> 
#include <time.h>


int main (void) {
    int segundos = time(0);
    srand(segundos);

    int numeroAleatorio = rand();
    int numeroSecreto = numeroAleatorio % 100;
    int palpite;
    int tentativas = 1;
    float pontos = 1000;
    float pontosPerdidos;
    int numerotentativas;
    int dificuldade;
    int acertou;

    printf("******************************************\n");
    printf("* SEJA BEM VINDO AO JOGO DE ADVINHAÇÃO!! *\n");
    printf("******************************************\n");


    
    //printf("%d\n", numeroSecreto);

    printf("Digite a dificuldade em que quer jogar sendo : (1) Fácil (2) Médio (3) Difícil:");
    scanf("%d", &dificuldade);

    switch (dificuldade)
    {
    case 1:
        numerotentativas = 20;
        break;
    case 2:
        numerotentativas = 10;  
        break;
    
    case 3:
        numerotentativas = 5;
        break;
    
    default: 
        printf("Selecione a dificuldade usando 1, 2 ou 3 sendo: (1) Fácil (2) Médio (3) Difícil:\n");
        break;
    }
    
    

    for(int i = 1; i <= numerotentativas; i++) {

             printf("Dê o seu %d° palpite: ", tentativas);
             scanf("%d", &palpite);

             if(palpite < 0) {
                printf("Você não pode digitar números negativos!\n");
        
                continue;
             }

            acertou = palpite == numeroSecreto;            
            int maior = palpite > numeroSecreto;
            
            if(acertou) {
                break;
            }
            else if (maior) {
                printf("Seu palpite foi maior que o número salvo em minha memória.\n");   
            }
            else  {
                printf("Seu palpite foi menor do que o número salvo na minha memória.\n"); 
            }
            tentativas++;
            pontosPerdidos =  abs(numeroSecreto - palpite) / (float)2;
            pontos -= pontosPerdidos;
    }

    if (acertou) {
        printf("Parabéns você acertou!!\n");
        printf("Você conseguiu acertar no seu %d° palpite.\n", tentativas);
        printf("Total de pontos: %.1f\n\n", pontos);
    }
    else {
        printf("Não foi dessa vez, tente novamente e lembre-se que pode alterar a dificuldade sempre que quiser.\n\n");
    }
    
    printf("FIM DE JOGO!!\n");
   
    
}    



