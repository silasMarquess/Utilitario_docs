#include<stdio.h>  
#include <stdlib.h>

int particio(int v[], int inicio, int fim){
    int pivo = (v[inicio]+v[fim]+v[(inicio+fim)/2])/3; //=76

    while (inicio < fim){ // 55 98

        while(inicio<fim && v[inicio] <= pivo)
        inicio = inicio +1;
        while (inicio < fim && v[fim] > pivo)
        fim = fim - 1;
        int change = v[inicio];
        v[inicio] = v[fim];
        v[fim] = change;
    }
    return inicio;
}
void quicksort(int v[],int inicio,int fim){ //0 fim 11
    if (inicio < fim){
        int pos = particio(v,inicio,fim);
        quicksort(v, inicio, pos - 1);
        quicksort(v, pos, fim);
    }
}
void imprimir(int v[], int tamanho){
    int i;
    for(i = 0; i <= tamanho; i++)
    printf("%d ", v[i]);
    printf("\n");

}
int main(){
    int vet[] = {55,12,34,56,77,90,13,36,32,58,78,98}; //12 elementos  55,12,34,56,58,90,13,36,32,77,78,98} 1 troca 77 / 58
    imprimir(vet,11);
    quicksort(vet,0,11);
    imprimir(vet,11);

    return 0;
}
