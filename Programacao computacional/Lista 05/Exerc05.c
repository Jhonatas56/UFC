#include <stdio.h>
#include <stdlib.h>

int main()
{
  float n1, n2, result;
  char operation;

  printf("Informe o primeiro número: ");
  scanf("%f", &n1);
  printf("Informe a operação desejada (+, -, *, /): ");
  scanf(" %c", &operation);
  printf("Informe o segundo número: ");
  scanf("%f", &n2);

  if (operation == '+')
  {
    result = n1 + n2;
    printf("%.2f", result);
  }
  else if (operation == '-')
  {
    result = n1 - n2;
    printf("%.2f", result);
  }
  else if (operation == '*')
  {
    result = n1 * n2;
    printf("%.2f", result);
  }
  else if (operation == '/')
  {
    result = n1 / n2;
    printf("%.2f", result);
  }
  else
  {
    printf("Operação inválida!");
  }

  return 0;
}