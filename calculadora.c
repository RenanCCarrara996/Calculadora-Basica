#include <stdio.h>
int main() {
    char operacao;
    float n1, n2, soma;

    printf("Numero 1: ");
    scanf("%f", &n1);
    printf("Numero 2: ");
    scanf("%f", &n2);
    printf("Digite a operacao desejada (+, -, *, /):  ");
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+':
            printf("Soma\n");
            // Implementar código para pegar os números e somar
            soma = n1 + n2;
            break;

        case '-':
            printf("Subtracao\n");
            // Implementar código para pegar os números e subtrair
            soma = n1 - n2;
            break;

        case '*':
            printf("Multiplicacao\n");
            // Implementar código para pegar os números e multiplicar
            soma = n1 * n2;
            break;

        case '/':
            printf("Divisao\n");
            // Implementar código para pegar os números e dividir (verificar divisão por zero)
            soma = n1 / n2;
            break;

        default:
            printf("Operacao invalida!\n");
  }

    printf("R: %.6f", soma);


    return 0;
}
