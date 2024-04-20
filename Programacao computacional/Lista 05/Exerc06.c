#include <stdio.h>
#include <string.h>

int main()
{
  char senha_correta[] = "abacate";
  char senha_usuario[20];

  printf("Digite a senha: ");
  scanf("%s", senha_usuario);

  if (strcmp(senha_usuario, senha_correta) == 0)
  {
    printf("ACESSO PERMITIDO\n");
  }
  else
  {
    printf("ACESSO NEGADO\n");
  }

  return 0;
}
