#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, dobro, triplo;
	
	printf("Informe um número: ");
	scanf("%d", &num);
	
	if (num % 2 == 0){
		dobro = (num * 2);
		printf("O dobro do número é %d \n",  dobro);
	} else {
		triplo = (num * 3);
		printf("O triplo do número é %d \n", triplo);
	}
	
	return 0;
}
