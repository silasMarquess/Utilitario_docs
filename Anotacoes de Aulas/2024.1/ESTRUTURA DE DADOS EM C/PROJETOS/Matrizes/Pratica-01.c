#include <stdlib.h>
#include <stdio.h>

int main()
{
    int mat[3][4] = {{1, 2, 4, 3}, {5, 7, 8, 2}, {3, 4, 2, 1}};
    int qtdeInt = 0, qtdePar = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            if ((mat[i][j] % 2) == 0)
            {
                qtdePar++;
            }
            else
            {
                qtdeInt++;
            }
        }
    }
    printf("Pares: %d\n", qtdePar);
    printf("Impares: %d", qtdeInt);

}