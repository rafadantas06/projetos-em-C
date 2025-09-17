#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortear_numero(){
	return(rand() %100) + 1;
	
}

int ler_palpite(){
	int palpite;
	
do{
        printf("Digite seu palpite (1 a 100): ");
        scanf("%d", &palpite);
        if (palpite < 1 || palpite > 100) {
            printf("Valor invalido! Tente novamente.\n");
        }
    } while (palpite < 1 || palpite > 100);
    return palpite;
}

void verificar_palpite(int palpite, int numero_sorteado) {
    if (palpite == numero_sorteado) {
        printf("Parabens! Você acertou!\n");
    } else if (palpite < sortear_numero) {
        printf("Voce chutou muito baixo! O valor correto e %d.\n", numero_sorteado);
    } else {
        printf("Voce chutou muito alto! O valor correto e %d.\n", numero_sorteado);
    }
}

int main() {
    srand(time(NULL)); 
    int numero_sorteado = sortear_numero();
    int palpite = ler_palpite();

    verificar_palpite(palpite, numero_sorteado);

    return 0;
}

