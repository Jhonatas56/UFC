#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b;
  printf("Digite dois números inteiros: ");
  scanf("%d %d", &a, &b);

  if (a % b == 0)
  {
    printf("O número %d é divisível por %d\n", a, b);
  }
  else
  {
    printf("O número %d não é divisível por %d\n", a, b);
  }

  return 0;
}
