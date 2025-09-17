#include <stdio.h>

int main()
{
	float peso, altura, imc;
	
	printf("Digite seu peso (em kg): ");
	scanf("%f", &peso);
	
	printf("Digite sua altura (em metros): ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("O IMC de uma pessoa com peso %f kg e altura %f metros e igual a %f \n", peso, altura, imc);
	
	return 0;
}
