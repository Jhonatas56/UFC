#include <stdio.h>
#include <stdlib.h>

int main()
{
  float n;

  printf("Informe um número: ");
  scanf("%f", &n);

  if (n == 0)
  {
    printf("O número é zero.");
  }
  else if (n > 0)
  {
    printf("O número é positivo.");
  }
  else
  {
    printf("O número é negativo.");
  }

  return 0;
}