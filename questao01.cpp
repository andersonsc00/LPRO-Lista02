#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float peso, altura, imc;
	
	printf("Informe seu peso: ");
	scanf("%f", &peso);
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	if (imc >= 18.5 && imc <= 24.9) {
		printf("Peso normal \n");
	} else {
		printf("Fora do peso normal \n");
	}
	
	return 0;
}
