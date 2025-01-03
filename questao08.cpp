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

    media = (n1 + n2) / 2;

    if (media >= 7) {
        printf("Aprovado\n");
    } else {
        printf("Informe a nota de uma prova adicional: ");
        scanf("%f", &n3);

        media = (n1 + n2 + n3) / 3;

        if (media >= 5) {
            printf("Aprovado com recuperação\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}

