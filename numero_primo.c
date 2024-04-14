#include <stdio.h>

int main() {
    int num, i;
    int primo = 1; // 1 para verdadeiro, 0 para falso
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    
    if (num <= 1)
        primo = 0;
    else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                primo = 0;
                break;
            }
        }
    }
    
    if (primo == 1)
        printf("%d é um número primo.\n", num);
    else
        printf("%d não é um número primo.\n", num);
    
    return 0;
}
