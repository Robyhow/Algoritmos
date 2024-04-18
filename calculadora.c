#include <stdio.h>

#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    printf("Bem-vindo à calculadora simples!\n");
    printf("Por favor, selecione a operação desejada (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite os dois números: ");
    scanf("%f %f", &num1, &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro! Divisão por zero.\n");
                return 1; // Encerra o programa com código de erro
            }
            break;
        default:
            printf("Operador inválido.\n");
            return 1; // Encerra o programa com código de erro
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
