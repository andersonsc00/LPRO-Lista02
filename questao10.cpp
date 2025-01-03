#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario, prestacao, limite;

    printf("Informe o sal�rio do trabalhador: ");
    scanf("%f", &salario);

    printf("Informe o valor da presta��o do empr�stimo: ");
    scanf("%f", &prestacao);

    limite = salario * 0.20;

    if (prestacao > limite) {
        printf("Empr�stimo n�o concedido.\n");
    } else {
        printf("Empr�stimo concedido.\n");
    }

    return 0;
}

