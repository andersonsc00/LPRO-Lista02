#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario, prestacao, limite;

    printf("Informe o salário do trabalhador: ");
    scanf("%f", &salario);

    printf("Informe o valor da prestação do empréstimo: ");
    scanf("%f", &prestacao);

    limite = salario * 0.20;

    if (prestacao > limite) {
        printf("Empréstimo não concedido.\n");
    } else {
        printf("Empréstimo concedido.\n");
    }

    return 0;
}

