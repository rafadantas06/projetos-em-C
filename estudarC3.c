#include <stdio.h>

int main()
{
	float c, f;
	
	printf("Digite o valor em graus celcius: ");
	scanf("%f", &c);
	
	f = (c * 9 / 5) + 32;
	
	printf("Uma temperatura de %f graus Celsius equivale a %f graus Fahrenheit\n", c, f);
	
	return 0;
}

