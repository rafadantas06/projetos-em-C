#include <stdio.h>

int soma(int a, int b);
int subtrai(int a, int b);
int multiplica(int a, int b);
int divide(int a, int b);

int main() {
    int a;
    int b;
    char operador;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite a operacao a ser feita (+ - * /): ");
    scanf(" %c", &operador);  // espaço antes do %c

    switch (operador) {
        case '+':
            soma(a, b);
            break;
        case '-':
            subtrai(a, b);
            break;
        case '*':
            multiplica(a, b);
            break;
        case '/':
            divide(a, b);
            break;
        default:
            printf("Operador inválido!\n");
    }

    return 0;
}

int soma(int a, int b) {
    int resultado = a + b;
    printf("O resultado da soma entre %d e %d é %d\n", a, b, resultado);
    return resultado;
}
int subtrai(int a, int b) {
    int resultado = a - b;
    printf("O resultado da subtração entre %d e %d é %d\n", a, b, resultado);
    return resultado;
}
int multiplica(int a, int b) {
    int resultado = a * b;
    printf("O resultado da multiplicação entre %d e %d é %d\n", a, b, resultado);
    return resultado;
}
int divide(int a, int b) {
    if (b == 0){
        printf("Não é possível dividir por 0.");
        return 0;
    }
    else{
        int resultado = a / b;
        printf("O resultado da divisão entre %d e %d é %d\n", a, b, resultado);
        return resultado;
    }

}
