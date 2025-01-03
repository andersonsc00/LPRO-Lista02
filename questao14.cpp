#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float h, peso;
    char sexo;
    
    printf("Informe sua altura: ");
    scanf("%f", &h);
    
    printf("Informe seu sexo: ");
    scanf(" %c", &sexo);
    
    if (sexo == 'M' || sexo == 'm') {
    	peso = (72.7 * h) - 58;
		printf("O seu peso ideal é %.2f \n", peso); 
	} else if (sexo == 'F' || sexo == 'f') {
		peso = (62.1 * h) - 44.7;
		printf("O seu peso ideal é %.2f \n", peso);
	} else {
		printf("Sexo inválido \n");
	}
	system("pause");
	return 0;
}
