#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  numeros[7] = {23,4,67,-8,90,54,21};
    OrderHeap(numeros,7);
    printf("");
    return 0;
}

void OrderHeap(int *V, int N)
{
    int aux;
    for (int i = (N - 1) / 2; i >= 0; i--)
    {
        CreatHeap(V,i,N-1);
    }

    for(int i=(N-1); i>=1;i--){
    aux = V[0];
    V[0] = V[i];
    V[i]= aux;
    CreatHeap(V,0,i-1);
    }
}

void CreatHeap(int *V, int in, int out)
{
    int aux = V[in];
    int j = (2 * in + 1);

    while (j <= out)
    {
        if (j < out)
        {
            if (V[j] < V[j + 1])
            {
                j = j + 1;
            }
        }
        if (V[j] > aux)
        {
            V[in] = V[j];
            in = j;
            j = (2 * in + 1);
        }
        else
        {
            j = out + 1;
        }
    }

    V[in] = aux;
}