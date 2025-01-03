#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float n1, n2, n3, media;
    
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);
    
    printf("Informe a terceira nota: ");
    scanf("%f", &n3);
    
    media = (n1 * 1 + n2 * 1 + n3 * 2) / 3;
    
    printf("-------------- \n\n");
    printf("Média: %.1f \n", media);
    
    if (media >= 60) {
    	printf("Situação: Aprovado \n");
	} else {
		printf("Situação: Reprovado \n");
	}
    
    return 0;
}
