#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;

  printf("Informe um número: ");
  scanf("%d", &n);

  if (n % 2 == 0)
  {
    printf("O número é par.");
  }
  else
  {
    printf("O número é ímpar.");
  }
  return 0;
}