//lista de entidades
typedef struct
{
    int id_produto;
    char nome_produto[100];
    float preco;

}Produto;

enum Categoria_product{
    ALIMENTACAO,
    LIMPEZA,
};

typedef struct{
    int id_client;
    char name[50];
}Client;

typedef struct{
    Produto p;
    int qtde_estoque;
}Estoque;

typedef struct
{
    Produto p;
    int qtde;
}Item_venda;

typedef struct{
    int id_pedido;
    Client c;
    Item_venda items_list[3];
    double acrescimo;
    double desconto;
}Pedido;


