#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, dobro, triplo;
	
	printf("Informe um n�mero: ");
	scanf("%d", &num);
	
	if (num % 2 == 0){
		dobro = (num * 2);
		printf("O dobro do n�mero � %d \n",  dobro);
	} else {
		triplo = (num * 3);
		printf("O triplo do n�mero � %d \n", triplo);
	}
	
	return 0;
}
