#include <stdio.h>
#include <stdlib.h>

int main()
{
  float salario;

  printf("Digite o salário: ");
  scanf("%f", &salario);

  if (salario <= 600.0)
  {
    salario = salario + salario * 0.3;
  } else if(salario > 600.0 && salario <= 1100.0){
    salario = salario + salario * 0.25;
  } else if(salario > 1100.0 && salario <= 2400.0){
    salario = salario + salario * 0.2;
  } else if(salario > 2400.0 && salario <= 3550.0){
    salario = salario + salario * 0.15;
  } else {
    salario = salario + salario * 0.1;
  }

  printf("O novo salário é: %.2f\n", salario);

  return 0;
}
