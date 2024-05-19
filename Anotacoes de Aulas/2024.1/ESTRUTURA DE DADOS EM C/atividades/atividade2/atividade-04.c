#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numero;
  printf("Informe um numero inteiro positivo não nulo:");
  scanf("%d", &numero);

  if ((numero % 2) == 0)
  {
    printf("Numero Par");
  }
  else
  {
    printf("Número ímpa");
  }

system("Pause");
  return 0;
}