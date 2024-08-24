#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./entities/entidades.c"



//Registro que controla o Cadastro de Produtos em uma Lista
typedef struct{
    Produto *data;
    int size;
    int qtdeItens;

}MyListProduct;

void LiberaMemoria(MyListProduct *MyList){
     free(MyList->data);
     MyList->data =NULL;
}

//FUNCAO QUE INSERI O PRODUTO RECEBIDO COMO PARAMETRO NA LISTA 
void InseriProduto(MyListProduct *MyList, Produto p){
  if(MyList->size==MyList->qtdeItens){
   MyList->size+=10;
   MyList->data = realloc(MyList->data,MyList->size * sizeof(Produto));
  }
  MyList->data[MyList->qtdeItens] = p;
  MyList->qtdeItens++;
}

//FUNCAO QUE QUE COLETA A ENTRADA DOS DADOS DO PRODUTO
void CadastraProduto(MyListProduct *myLista){
   int n ;
   char nome[100];
   Produto p;
   printf("Informe a quantidade de produtos que deseja cadastrar:");
   scanf("%d",&n);
   
   for(int i=0;i<n;i++){
    printf("Cadastro Produto: %d\n",(i+1));
    printf("ID:");
    scanf("%d",&p.id_produto);
    printf("Nome:");
    //resolver esse erro
    scanf("%s\n",&nome);
    printf("Valor Bruto:");
    scanf("%f",&p.preco);
    InseriProduto(myLista,p);
   }
}


//FUNCAO PRINCIPAL
int main(void){
    MyListProduct dataProdutos;

    dataProdutos.qtdeItens=0;
    dataProdutos.size=10;
    dataProdutos.data = (Produto *)malloc(dataProdutos.size * sizeof(Produto));

    if(dataProdutos.data == NULL){
        printf("Erro de alocacao");
        exit(1);
    }

    CadastraProduto(&dataProdutos);

    LiberaMemoria(&dataProdutos);
    system("Pause");
    return 0;
}




