#include <stdio.h>
#include <stdlib.h>

int main() {
// O mesmo exercício anterior, mas agora não será informado o número de
// mercadorias em estoque. Então o funcionamento deverá ser da seguinte forma: ler o
// valor da mercadoria e perguntar ‘MAIS MERCADORIAS (S/N)?’. Ao final,
// imprimir o valor total em estoque e a média de valor das mercadorias em estoque.
    
    int totalMercadorias = 0;
    float valorMercadoria, totalEstoque = 0.0, mediaValorMercadoria = 0.0;
    char resposta = 'S';
   
    while(resposta == 'S' || resposta == 's') {
        printf("INFORME O VALOR DA MERCADORIA DESEJADA: ");
        scanf("%f", &valorMercadoria);
       
        while(valorMercadoria < 0.0) {
            printf("VALOR INVÁLIDO, POR FAVOR INFORME UM VALOR VÁLIDO: ");
            scanf("%f", &valorMercadoria);
        }
       
        totalEstoque = totalEstoque + valorMercadoria;
        totalMercadorias++;
       
        printf("MAIS MERCADORIAS (S/N)? ");
        scanf(" %c", &resposta);
    }
   
    mediaValorMercadoria = totalEstoque/totalMercadorias;
    
    printf("Você tem um total de R$%.2f em estoque.\n", totalEstoque);
    printf("Você tem uma média de R$%.2f por mercadorias em estoque.\n", mediaValorMercadoria);

	return 0;
}