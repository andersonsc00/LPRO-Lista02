#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float velocidade, multa;

    printf("Informe a velocidade do veículo: ");
    scanf("%f", &velocidade);

    if (velocidade > 80) {
        multa = (velocidade - 80) * 5;
        printf("Valor da multa: R$%.2f\n", multa);
    } else {
        printf("Dentro do limite de velocidade\n");
    }

    return 0;
}
