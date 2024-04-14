#include <stdio.h>

int main() {
    int num, i;
    unsigned long long fatorial = 1;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    
    if (num < 0)
        printf("Erro! Fatorial de número negativo não existe.\n");
    else {
        for (i = 1; i <= num; ++i) {
            fatorial *= i;
        }
        printf("O fatorial de %d é: %llu\n", num, fatorial);
    }
    
    return 0;
}
