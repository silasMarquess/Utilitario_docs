#include <stdlib.h>
#include <stdio.h>

int main()
{
  int  numeros[7] = {23,4,67,-8,90,54,21};
  QuickSort(numeros,0,6);
  printf("hh");
  return 0;
}

void QuickSort(int *V, int in, int out){
  int pivot;  

   if(out>in){
    pivot = Particiona(V,in, out);
    QuickSort(V,in, pivot - 1); //partição 1
    QuickSort(V,pivot + 1 ,out);// particao 2
   }
}

int Particiona(int *V, int in, int out)
{
  int p, esq, dir, aux;
  esq = in;
  dir = out;
  p = V[in];

  while (esq < dir)
  {
    while (V[esq] <= p)
    {
      esq++;
    }

    while (V[dir] > p)
    {
      dir--;
    }

    if (esq < dir)
    {
      aux = V[esq];
      V[esq] = V[dir];
      //printf(V[esq]);
      V[dir] = aux;
    }
  }

  V[in] = V[dir];
  V[dir] = p;
  return dir;
}