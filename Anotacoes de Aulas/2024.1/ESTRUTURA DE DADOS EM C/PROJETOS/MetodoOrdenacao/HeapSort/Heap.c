#include <stdio.h>
#include <stdlib.h>

int main()
{
}

void OrderHeap(int *V, int N)
{
    int aux;
    for (int i = (N - 1) / 2; i >= 0; i--)
    {
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