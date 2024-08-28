#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./entities/entidades.c"


//ESTRUTURA CRIADA PARA FAZER O CONTROLE DE CADASTRO DE PRODUTO
typedef struct{
    Produto *data; //esse ponteiro irá apontar para a memoria que será alocada posteriomente. è onde os produtos vao ser cadastrados
    int size; //variavel que armazena o espaço disponivel no memoria alocada
    int qtdeItens; //variavel que armazena a quantidade de produtos contidos na memoria
}MyListProduct;

//FUNÇÃO AUXILIAR QUE DESALOCA  A MEMORIA PARA EVITAR OVERHEAD DURANTE A EXECUÇÃO
void LiberaMemoria(MyListProduct *MyList){
     free(MyList->data);
     MyList->data =NULL;
}

//A FUNÇÃO ABAIXO RECEBE UM PONTEIRO QUE FAZ REFERENCIA A MyListProduct
//QUE É A ESTRUTURA QUE VAI ARMAZENAR OS PRODUTOS. A FUNÇÃO TAMBÉM RECEBE
//COM PARAMETRO UM PRODUTO QUE FOI DEFINIDO NO ESCOPO ACIMA.
void InseriProduto(MyListProduct *MyList, Produto p){
    //esse if testa se existe memoria suficiente para armazena mais um produto
    //se não, então o codigo irá alocar mais memoria com a função realloc
  if(MyList->size==MyList->qtdeItens){
   MyList->size+=10;//requisitando mais memoria
   MyList->data = realloc(MyList->data,MyList->size * sizeof(Produto));//funcao que realoca o espaco
  }
  MyList->data[MyList->qtdeItens] = p;//adiciona um produto no proximo indice disponível
  MyList->qtdeItens++; //incrementa o indice
}


//FUNCAO QUE QUE COLETA A ENTRADA DOS DADOS DO PRODUTO DIGITADOS PELO O UTILIZADOR DO PROGAMA
void CadastraProduto(MyListProduct *myLista){
   int n ;
   char nome[100];//variavel auxilar local

   Produto p;//instancia de um produto
   printf("Informe a quantidade de produtos que deseja cadastrar:");
   scanf("%d",&n); //recebe a quantidade de produtos que se deseja cadastrar
   
   //estrura de repetição que ira percorrer a quantidade de produtos informada
   for(int i=0;i<n;i++){
    printf("Cadastro Produto: %d\n",(i+1));
    printf("ID:");
    scanf("%d",&p.id_produto);
    fflush(stdin);//essa função limpar o Buffer da memoria  para evitar erros em novas leitura do teclado
    printf("Nome:");
    scanf("%99[^\n]",nome);
    fflush(stdin);//essa função limpar o Buffer da memoria  para evitar erros em novas leitura do teclado
    printf("Valor Bruto R$:");
    scanf("%f",&p.preco);
    fflush(stdin);//essa função limpar o Buffer da memoria  para evitar erros em novas leitura do teclado
    InseriProduto(myLista,p);
   }
}

//função para mostrar o dados cadastrados
void PrintColetionProducts(MyListProduct *myLista){
    for(int i =0;i<myLista->qtdeItens;i++){
        Produto p = myLista->data[i];
        printf("--------Produto %d--------------\n",(i+1));
        printf("Id: %d\n",p.id_produto);
        printf("Nome: %s\n",p.nome_produto);
        printf("Preco: %.2f\n",p.preco);
    }

}

//FUNCAO PRINCIPAL
int main(void){
    MyListProduct dataProdutos;
    dataProdutos.qtdeItens=0; //definindo uma quantidade inicial no nosso modelo
    dataProdutos.size=10; //requisitando um espaco de 10 produtos

    //a função aloca um memoria com base em "size" e "Produto" e 
    //retorna um ponteiro que aponta para a memoria alocada
    dataProdutos.data = (Produto *)malloc(dataProdutos.size * sizeof(Produto));

   //aqui estou testando se a alocação foi bem sucedida
   //se nao o progama deve parar a execução
    if(dataProdutos.data == NULL){
        printf("Erro de alocacao");
        exit(1);
    }
  
    //funcao que coleda os dados do produto (Ver o escopo da função acima)
    CadastraProduto(&dataProdutos);
    
    printf("\nRESUMO\n");
    PrintColetionProducts(&dataProdutos);
    //desloca a memoria usada para evitar Overhead
    LiberaMemoria(&dataProdutos);

    system("Pause");
    return 0;
}




