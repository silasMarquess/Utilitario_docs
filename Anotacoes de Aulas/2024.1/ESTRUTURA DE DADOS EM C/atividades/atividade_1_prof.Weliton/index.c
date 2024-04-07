#include <stdio.h>
#include <stdlib.h>

int main()
{
    float res, n1, n2;
    int op;
    res = 0;
    n1 =0;
    n2 =0;
    printf("Informe dois numeros:\n");
    scanf("%f,%f", &n1, &n2);
    printf("Informe uma opção:\n1-Sum ; 2-Sub, 3-Mult;4-Div \n");
    scanf("%i", &op);

    switch (op)
    {
    case 1:
        res = n1 + n2;
        break;
    case 2:
        res = n1 - n2;
        break;
    case 3:
    res = n1 * n2;
        break;
    case 4:
    res = n1/n2;
        break;
    default:
        printf("Opção invalida");
         break;
    }
    printf("O resultado é: %f",res);

    return 0;
}
