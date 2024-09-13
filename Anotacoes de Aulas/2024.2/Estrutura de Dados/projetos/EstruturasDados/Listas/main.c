#include <stdlib.h>
#include <stdio.h>
#include "MyListOp.h";

int main(void){
 List lista ;
 _initialize(&lista);
 _push(&lista,1);
 _pushEnd(&lista,3);
  _pushEnd(&lista,2);
  _remove(&lista,2);
  ShowList(&lista);
  LiberarLista(&lista);
  ShowList(&lista);
  return 0;
}

