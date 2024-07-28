#include <stdio.h>
#include <stdlib.h>

int main() {
// 	Uma loja está levantando o valor total de todas as mercadorias em estoque.
// Escreva um algoritmo que permita a entrada das seguintes informações: 
// a) o número total de mercadorias no estoque; 
// b) o valor de cada mercadoria. 
// Ao final,imprimir o valor total em estoque e a média de valor das mercadorias.

    int numMercadorias;
    float valorMercadoria, valorEstoqueTotal = 0.0, mediaValorMercadoria = 0.0;
    
    printf("Informe quantas mercadorias voce tem em estoque: ");
    scanf("%d", &numMercadorias);
    
    for(int i = 1; i <= numMercadorias; i++) {
        printf("Informe o valor da mercadoria %d: ", i);
        scanf("%f", &valorMercadoria);
        
        while(valorMercadoria < 0.0) {
            printf("Valor inválido, informe um valor válido: ");
            scanf("%f", &valorMercadoria);
        }
        
        valorEstoqueTotal = valorEstoqueTotal + valorMercadoria;
    }
    
    mediaValorMercadoria = valorEstoqueTotal/numMercadorias;
    
    printf("Voce tem um valor total em estoque de R$%.2f\n", valorEstoqueTotal);
    printf("A media do valor de suas mercadorias e R$%.2f\n", mediaValorMercadoria);

	return 0;
}