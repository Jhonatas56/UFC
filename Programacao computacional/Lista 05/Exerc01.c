#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;

  printf("Informe um número: ");
  scanf("%d", &num);

  if (num > 10)
  {
    printf("É MAIOR QUE 10!");
  }
  else
  {
    printf("NÃO É MAIOR QUE 10!");
  }

  return 0;
}