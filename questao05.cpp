#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float c, k, f;
	
	printf("Informe a temperatura em  Celsius: ");
	scanf("%f", &c);
	
	if (c < 20) {
		f = (c * 9/5) + 32;
		printf("A temperatura em Fahrenheit é %.1f", f);
	} else {
		k = c + 273,15;
		printf("A temperatura em Kelvin é %.1f", k);
	}
	
	return 0;
}
