#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n) {
    int currentValue = 0, nextValue = 1;
    
    printf("%d ", currentValue);
    
    if(n > 1) {
        printf("%d ", nextValue);
    }
    
    for(int i = 2; i <= n-1; i++) {
        int proximo = currentValue + nextValue;
        
        printf("%d ", proximo);
        
        currentValue = nextValue;
        nextValue = proximo;
    }
}

int main() {
// A sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como Série de Fibonacci.
// Nessa sequência, cada número, depois dos 2 primeiros (fixados em 0 e 1), é igual à soma
// 1
// dos 2 anteriores. Escreva um programa em C que receba como parâmetro um inteiro
// positivo N (0 < N < 46) e mostre os N primeiros números dessa série, separados por
// espaço.

    int N;
    
    printf("Informe um valor: ");
    scanf("%d", &N);
    
    while(N <= 0 || N >= 46) {
        printf("Valor invalidom informe um numero inteiro entre 0 e 46: ");
        scanf("%d", &N);
    }
    
    fibonacci(N);

    return 0;
}
