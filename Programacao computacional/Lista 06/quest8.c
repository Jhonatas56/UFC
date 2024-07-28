#include <stdio.h>
#include <stdlib.h>

void multiplicacao() {
    for(int i = 1; i <= 10; i++) {
        printf("Multiplicacao para: %d\n", i);
        printf("---------------\n");
        for(int j = 0; j <= 10; j++) {
            printf("%2d X %2d = %3d", j, i, j*i);
            printf(" |\n");
        }
        
        printf("---------------\n");
        printf("\n");
    }
}

void soma() {
    for(int i = 1; i <= 10; i++) {
        printf("Soma para: %d\n", i);
        printf("---------------\n");
        for(int j = 0; j <= 10; j++) {
            printf("%2d + %2d = %3d", j, i, j+i);
            printf(" |\n");
        }
        
        printf("---------------\n");
        printf("\n");
    }
}

void subtracao() {
    for(int i = 1; i <= 10; i++) {
        printf("Subtracao para: %d\n", i);
        printf("---------------\n");
        for(int j = i; j <= (i + 10); j++) {
            printf("%2d - %2d = %3d", j, i, j-i);
            printf(" |\n");
        }
        
        printf("---------------\n");
        printf("\n");
    }
}

int main() {
// Usando laços aninhados, implemente um programa que exiba as operações da
// tabuada de somar, subtrair e multiplicar. O programa deve solicitar ao usuário que
// escolha qual operação quer exibir. Se Soma, Subtração, Multiplicação ou Todas.

    int a;
    
    printf("Informe a operação que deseja retornar a tabuada:\n");
    printf("- Digite 1 para soma;\n");
    printf("- Digite 2 para subtracao;\n");
    printf("- Digite 3 para multiplicacao;\n");
    printf("- Digite 4 para todas;\n");
    scanf("%d", &a);

    switch(a) {
        case 1:
            soma();
            break;
        case 2:
            subtracao();
            break;
        case 3:
            multiplicacao();
            break;
        case 4:
            soma();
            subtracao();
            multiplicacao();
            break;
        default: 
            printf("Valor inválido.");
    }

    return 0;
}
