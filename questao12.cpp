#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b, c, d;

    printf("Informe o valor de A: ");
    scanf("%d", &a);

    printf("Informe o valor de B: ");
    scanf("%d", &b);

    printf("Informe o valor de C: ");
    scanf("%d", &c);

    printf("Informe o valor de D: ");
    scanf("%d", &d);

    if (a > b && a > c && a > d) {
        printf("Maior valor: %d\n", a);
    } else if (b > a && b > c && b > d) {
        printf("Maior valor: %d\n", b);
    } else if (c > a && c > b && c > d) {
        printf("Maior valor: %d\n", c);
    } else {
        printf("Maior valor: %d\n", d);
    }

    if (a < b && a < c && a < d) {
        printf("Menor valor: %d\n", a);
    } else if (b < a && b < c && b < d) {
        printf("Menor valor: %d\n", b);
    } else if (c < a && c < b && c < d) {
        printf("Menor valor: %d\n", c);
    } else {
        printf("Menor valor: %d\n", d);
    }

    return 0;
}

