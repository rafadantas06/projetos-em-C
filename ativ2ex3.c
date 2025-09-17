#include <stdio.h>

int main() 
{
    float celsius;
	float fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0 / 5.0) * celsius + 32;

    printf("Uma temperatura de %.2f graus Celsius equivale a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
