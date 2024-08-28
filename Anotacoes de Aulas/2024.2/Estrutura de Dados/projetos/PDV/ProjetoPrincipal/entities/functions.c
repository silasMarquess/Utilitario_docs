#include "./entities/entidades.c";

double getTotalItem(Item_venda i){
return i.p.preco * i.qtde;
}

double getTotalPedido(Pedido p){
 double soma =0;
 for(int i =0;i<=sizeof(p.items_list);i++){
    soma+=getTotalItem(p.items_list[i]);
 }
 return (soma + p.acrescimo)- p.desconto;
}

