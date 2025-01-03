#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, soma;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);

    printf("Informe o segundo número: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    if (soma > 20) {
    	printf("Resultado de %d + 8: %d\n", soma, soma + 8);
	} else {
    	printf("Resultado de %d - 5: %d\n", soma, soma - 5);
	}

    return 0;
}

