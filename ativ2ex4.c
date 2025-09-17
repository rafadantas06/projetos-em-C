#include <stdio.h>
#include <math.h>

int main() 
{
    float cateto1;
	float cateto2; 
	float hipotenusa;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    printf("Um triangulo retangulo com lados %.2f e %.2f tem uma hipotenusa igual a %.2f.\n", cateto1, cateto2, hipotenusa);

    return 0;
}
