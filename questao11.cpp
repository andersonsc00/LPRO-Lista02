#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int num1, num2;
    
    printf("Informe o primeiro n�mero: ");
    scanf("%d", &num1);
    
    printf("Informe o segundo n�mero: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
    	printf("%d � o maior e %d � o menor. ", num1, num2);
	} else {
		printf("%d � o maior e %d � o menor. ", num2, num1);
	}
	
	return 0;
	
}
