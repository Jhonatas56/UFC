#include <stdio.h>
#include <stdlib.h>

int main()
{
  float n1, n2, media;

  printf("Informe a primeira nota: ");
  scanf("%f", &n1);
  printf("Informe a segunda nota: ");
  scanf("%f", &n2);

  media = (n1 + n2) / 2.0;

  if (media >= 6.0)
  {
    printf("Aluno aprovado com média %.2f", media);
  }
  else
  {
    printf("Aluno reprovado com média %.2f", media);
  }

  return 0;
}