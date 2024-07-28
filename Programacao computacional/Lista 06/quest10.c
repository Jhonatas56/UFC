#include <stdio.h>
#include <stdlib.h>

int main() {
// Faça um programa para calcular o fatorial de um número digitado pelo usuário,
// usando o formato de cálculo iterativo (não recursivo).
    
    int num, resultado = 1;
   
    printf("Informe um numero para calcular o fatorial: ");
    scanf("%d", &num);
    
    while(num <= 0) {
        printf("Numero invalido, informe um numero inteiro maior que 0: ");
        scanf("%d", &num);
    }
    
    for(int i = 1; i <= num; i++) {
        resultado = resultado * i;
    }
    
    printf("O fatorial de %d eh: %d", num, resultado);

	return 0;
}