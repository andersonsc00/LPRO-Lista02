#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num, raiz, quadrado;
    
    printf("Informe um número: ");
    scanf("%f", &num);
    
    if (num > 0) {
        raiz = num * 0.5;  
        printf("A raiz quadrada de %.1f é %.1f\n", num, raiz);
    } else {
        quadrado = num * num;
        printf("%.1f ao quadrado é %.1f\n", num, quadrado);
    }
    
    return 0;
}

