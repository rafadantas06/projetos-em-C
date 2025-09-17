#include <stdio.h>

int main()
 {
    float peso;
	float altura;
	float imc;

    
    printf("Digite o peso da pessoa: ");
    scanf("%f", &peso);

    printf("Digite a altura da pessoa: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O IMC de uma pessoa com peso %.2f kg e altura %.2f m é igual a %.2f.\n", peso, altura, imc);

    return 0;
}
