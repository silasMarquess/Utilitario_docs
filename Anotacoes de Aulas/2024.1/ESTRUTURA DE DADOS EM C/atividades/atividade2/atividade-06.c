#include <stdio.h>
#include <stdlib.h>

int main()
{
  double n1, n2, n3, media;
  printf("Informe as tres notas das provas:");
  printf("N1:\n");
  scanf("%f", n1);
  printf("N2:");
  scanf("%f", n2);
  printf("N3:");
  scanf("%f", n3);

  media = ((n1 + n2 + n3) / 3);

  if (media >= 7)
  {
    printf("a média foi: %2f, aprovado.", media);
  }
  else if (media > 5 && media < 7)
  {
    printf("a média foi: %2f, recuperação.", media);
  }
  else
  {
    printf("a média foi: %2f, reprovado.", media);
  }

system("pause");
return 0;
}
