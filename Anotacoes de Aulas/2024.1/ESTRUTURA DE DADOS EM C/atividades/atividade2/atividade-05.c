
#include <stdio.h>
#include <stdlib.h>

int main(){
  char caractere;
  printf("Informe um caractere:");
  scanf("%s", &caractere);

  if (caractere == 'A' || caractere == 'a')
  {
    printf("Caractere é um vogal (A)");
  }
  else if (caractere == 'E' || caractere == 'e')
  {
    printf("Caractere é um vogal (E)");
  }
  else if (caractere == 'I' || caractere == 'i')
  {
    printf("Caractere é um vogal (I)");
  }
  else if (caractere == 'O' || caractere == 'o')
  {
    printf("Caractere é um vogal (O)");
  }
  else if (caractere == 'U' || caractere == 'u')
  {
    printf("Caractere é um vogal (u)");
  }
  else
  {
    printf("caractere é um consoante");
  }

system("pause");
  return 0;
}