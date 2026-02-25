#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int usuario;
    
    srand(time(NULL));
    int comp = rand() % 3 + 1;

    printf("Digite sua opcao, (pedra-1/ papel-2/ tesoura-3): ");
    scanf("%d", &usuario);
    
    printf("O computador escolheu %d\n", comp);
    
    if(usuario == comp){
        printf("Empate\n");
    }
    
    else if( usuario == 1 && comp == 3){
    printf("Voce venceu\n");
    }
    
    else if( usuario == 3 && comp == 2){
    printf("Voce venceu\n");
    }
    
    else if( usuario == 2 && comp == 1){
    printf("Voce venceu\n");
    }
    else{
        printf("Voce perdeu\n");
    }
    
    return 0;
}
    
    
