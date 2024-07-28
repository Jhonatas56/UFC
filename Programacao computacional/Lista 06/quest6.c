#include <stdio.h>
#include <stdlib.h>

void desenhaTriangulo(int h) {
    for (int i = 1; i <= h; i++) {
        // Imprime os espaços antes dos asteriscos
        for (int j = 0; j < h - i; j++) {
            printf(" ");
        }

        // Imprime os asteriscos para a linha atual
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }

        // Pula para a próxima linha
        printf("\n");
    }
}

int main() {
    int h;

    printf("Informe uma altura para o triangulo: ");
    scanf("%d", &h);

    desenhaTriangulo(h);

    return 0;
}
