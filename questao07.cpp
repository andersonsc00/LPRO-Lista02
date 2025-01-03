#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	float valor, valorFinal;
	
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
	printf("Informe o valor do ingresso: ");
	scanf("%f", &valor);
	
	if (idade > 60) {
		valorFinal = valor * 0.7;
		printf("O valor final do ingresso é %.2f", valorFinal);
	} else {
		valorFinal = valor * 0.9;
		printf("O valor final do ingresso é %.2f", valorFinal);
	}
	
	return 0;
}
