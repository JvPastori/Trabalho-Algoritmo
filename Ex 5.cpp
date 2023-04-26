#include <stdio.h>

int main() {
    int valor, resto, cedula;

    printf("Insira o valor monetario: ");
    scanf("%d", &valor);

    if (valor >= 100) {
        cedula = valor / 100;
        resto = valor % 100;
        printf("%d nota(s) de R$ 100.00\n", cedula);
        valor = resto;
    }

    if (valor >= 50) {
        cedula = valor / 50;
        resto = valor % 50;
        printf("%d nota(s) de R$ 50.00\n", cedula);
        valor = resto;
    }

    if (valor >= 20) {
        cedula = valor / 20;
        resto = valor % 20;
        printf("%d nota(s) de R$ 20.00\n", cedula);
        valor = resto;
    }

    if (valor >= 10) {
        cedula = valor / 10;
        resto = valor % 10;
        printf("%d nota(s) de R$ 10.00\n", cedula);
        valor = resto;
    }

    if (valor >= 5) {
        cedula = valor / 5;
        resto = valor % 5;
        printf("%d nota(s) de R$ 5.00\n", cedula);
        valor = resto;
    }

    if (valor >= 2) {
        cedula = valor / 2;
        resto = valor % 2;
        printf("%d nota(s) de R$ 2.00\n", cedula);
        valor = resto;
    }

    if (valor >= 1) {
        cedula = valor / 1;
        resto = valor % 1;
        printf("%d nota(s) de R$ 1.00\n", cedula);
        valor = resto;
    }

    return 0;
}

