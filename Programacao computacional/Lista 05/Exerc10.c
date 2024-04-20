#include <stdio.h>
#include <stdlib.h>

int main()
{
  float N1, N2, P1, P2, media;

  printf("Digite a nota N1: ");
  scanf("%f", &N1);
  printf("Digite o peso P1: ");
  scanf("%f", &P1);
  printf("Digite a nota N2: ");
  scanf("%f", &N2);
  printf("Digite o peso P2: ");
  scanf("%f", &P2);

  media = (P1 * N1 + P2 * N2) / (P1 + P2);

  if (media >= 7.0)
  {
    printf("Aprovado com média %.2f\n", media);
  }
  else if (media >= 4.0)
  {
    printf("Ficou de Final com média %.2f\n", media);
  }
  else
  {
    printf("Reprovado com média %.2f\n", media);
  }

  return 0;
}