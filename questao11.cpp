#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int num1, num2;
    
    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Informe o segundo número: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
    	printf("%d é o maior e %d é o menor. ", num1, num2);
	} else {
		printf("%d é o maior e %d é o menor. ", num2, num1);
	}
	
	return 0;
	
}
