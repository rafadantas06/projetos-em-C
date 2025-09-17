#include <stdio.h>

int main() 
{
    float raio;
	float area;
    const float PI = 3.141592653589793;

    // Solicita o raio do círculo
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    // Calcula a área usando a fórmula área = p * raio²
    area = PI * raio * raio;

    // Imprime o resultado formatado
    printf("Um círculo com raio %.2f tem área igual a %.2f.\n", raio, area);

    return 0;
}
