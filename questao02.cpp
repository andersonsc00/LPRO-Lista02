#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Informe um n�mero: ");
	scanf("%d", &num);
	
	if (num > 10 && num % 5 == 0)  {
		printf("Maior que 10 e divis�vel por 5 \n");
	} else {
		printf("N�o atende �s condi��es \n");
	}
	
	return 0;
}
