#include <stdio.h>

int main() 
{

    int num1;
	int num2;
    
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Soma: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtracao: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplicacao: %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Divisao: %d / %d = %d\n", num1, num2, num1 / num2);
    
    return 0;

}
