#include <stdio.h>
#include <stdlib.h>

void classificarTriangulo(int a, int b, int c)
{
  if (a == b && b == c)
  {
    printf("O triângulo é Equilátero.\n");
  }
  else if (a == b || a == c || b == c)
  {
    printf("O triângulo é Isósceles.\n");
  }
  else
  {
    printf("O triângulo é Escaleno.\n");
  }
}

int main()
{
  int a, b, c;

  printf("Digite o tamanho do segmento de reta a: ");
  scanf("%d", &a);
  printf("Digite o tamanho do segmento de reta b: ");
  scanf("%d", &b);
  printf("Digite o tamanho do segmento de reta c: ");
  scanf("%d", &c);

  if (a + b > c && a + c > b && b + c > a)
  {
    printf("Os segmentos de reta podem formar um triângulo.\n");
    classificarTriangulo(a, b, c);
  }
  else
  {
    printf("Os segmentos de reta NÃO podem formar um triângulo.\n");
  }

  return 0;
}
