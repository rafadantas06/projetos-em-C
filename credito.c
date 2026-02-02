#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long numero = get_long("Número: ");

    long temp = numero;
    int soma = 0;
    int posicao = 0;

    // Algoritmo de Luhn
    while (temp > 0)
    {
        int digito = temp % 10;

        if (posicao % 2 == 1)
        {
            digito *= 2;
            soma += digito / 10 + digito % 10;
        }
        else
        {
            soma += digito;
        }

        temp /= 10;
        posicao++;
    }

    // Se não passar no Luhn
    if (soma % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // Contar dígitos
    temp = numero;
    int digitos = 0;
    while (temp > 0)
    {
        temp /= 10;
        digitos++;
    }

    // Obter dois primeiros dígitos
    temp = numero;
    while (temp >= 100)
    {
        temp /= 10;
    }
    int primeiros = temp;

    // Verificar bandeira
    if (digitos == 15 && (primeiros == 34 || primeiros == 37))
    {
        printf("AMEX\n");
    }
    else if (digitos == 16 && (primeiros >= 51 && primeiros <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((digitos == 13 || digitos == 16) && (primeiros / 10 == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
