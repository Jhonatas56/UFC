#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool getPrimo(int num) {
    if(num <= 1) {
        return false;
    }
    
    if(num == 2) {
        return true;
    }
    
    if(num % 2 == 0) {
        return false;
    }
    
    for(int i = 3; i * i <= num; i+=2) {
        if(num % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
// - Faça um programa que leia um valor e diga se o número digitado é primo ou não.
    
    int valor;
    
    printf("Informe um valor: ");
    scanf("%d", &valor);
    
    if(getPrimo(valor)) {
        printf("O numero %d e primo.", valor);
    } else {
        printf("O numero %d nao e primo.", valor);
    }

	return 0;
}