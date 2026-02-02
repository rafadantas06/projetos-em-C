#include <stdio.h>

int main(){
    int altura = 0;

    while (altura < 1 || altura > 8)
    {
        printf("Tamanho: ");
        scanf("%d", &altura);
    }

    for (int i = 1; i <= altura; i++)
    {
        for (int espacos = 0; espacos < altura - i; espacos++)
        {
            printf(" ");
        }

        for (int blocos = 0; blocos < i; blocos++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
