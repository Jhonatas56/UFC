#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, maior = 0, menor = 0;
	float media, soma = 0, total = 0;

	printf("Informe o primeiro valor: ");
	scanf("%d", &a);
	printf("Informe o segundo valor: ");
	scanf("%d", &b);

	if(a == b || (a-b == 1) || (b -a == 1)) {
		printf("Nao ha valores inteiros para retornar entre: %d e %d", a,b);
		return 0;
	}

	if(a > b) {
		maior = a;
		menor = b;
	} else {
		maior = b;
		menor = a;
	}

	for(int i = menor+1; i <= maior - 1; i++ ) {
		soma = soma + i;
		total++;
	}

	media = soma/total;

	printf("A soma dos inteiros entre: %d e %d eh): %.2f\n", a, b, soma);
	printf("A media dos inteiros entre: %d e %d eh): %.2f\n", a, b, media);

	return 0;
}