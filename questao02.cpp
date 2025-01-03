#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Informe um número: ");
	scanf("%d", &num);
	
	if (num > 10 && num % 5 == 0)  {
		printf("Maior que 10 e divisível por 5 \n");
	} else {
		printf("Não atende às condições \n");
	}
	
	return 0;
}
