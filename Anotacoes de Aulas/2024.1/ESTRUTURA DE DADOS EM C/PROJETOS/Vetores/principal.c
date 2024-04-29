#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

int numero[10];

for(int i =0;i<10;i++){
    printf("Informe o numero %d:-->",i);
    scanf("%d",&numero[i]);
}

for(int i =9;i>=0;i--){
printf("%d\n",numero[i]);
}

//----------------------
   printf("\n");
    return 0;
}