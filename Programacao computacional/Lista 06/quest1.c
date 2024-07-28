#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, serie = 1;

	printf("Informe um numero positivo maior que 0: ");
	scanf("%d", &N);

	while (N <= 0) {
		printf("Numero invalido, digite novamente: ");
		scanf("%d", &N);
	}

	printf("Termos: ");

	for(int count = 0; count < N; count++) {
		if(count != N-1) {
			printf("%d, ", serie);
			serie += 4;
		} else {
			printf("%d", serie);
		}
	}

	return 0;
}