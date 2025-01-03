#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float compra;
	int pagamento;
	
	printf("Informe o valor da compra: ");
	scanf("%f", &compra);
	
	printf("------------------ \n");
	printf("1 - À vista \n");
	printf("2 - Cartão \n");
	printf("------------------ \n");
	
	printf("Qual a forma de pagamento? ");
	scanf("%d", &pagamento);
	
	if (compra > 500 && pagamento == 1){
		printf("Tem direito a desconto \n");
	} else {
		printf("Sem desconto \n");
	}
	
	return 0;
}
