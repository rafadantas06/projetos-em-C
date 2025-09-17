#include <stdio.h>

int main()
{
	int a, b;
	int soma;
	int sub;
	int mult;
	int div;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	
	soma = a + b;
	sub = a - b;
	mult = a * b;
	div = a / b;
	
	printf("%.2d e a soma de a e b.\n",soma);
	printf("%.2d e a subtracao de a e b.\n",sub);
	printf("%.2d e a multiplicacao de a e b.\n",mult);
	printf("%.2d e a divisao de a e b.\n",div);

	return 0;
	
}
