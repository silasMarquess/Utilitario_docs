#ifndef MyListOp
#define MyListOp


typedef struct{
     int data;
     struct el* next;
}el;

typedef struct{
     struct el* first;
     int size;
}List;

void _initialize(List* list){
        list->first= NULL;
        list->size =0;
}

el* _create(int value){
  el* no = (el*)malloc(sizeof(int));
  no->data = value;
  no->next = NULL;
  return no;
}

void _push(List* list, int element){
    el* no = _create(element);
    no->next = list->first;
    list->first = no;
    list->size++;
}

void _pushEnd(List* list, int element){
    el* no = _create(element);
    if(list->first==NULL){
        list->first = no;
    }else{
        el* temp = list->first;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = no; 
    }
    list->size++; 
}

void _remove(List* list, int element){
    el* point = list->first;
    el* temp = NULL;

    if(point!=NULL && point->data==element){
        list->first = point->next;
       free(point);
       list->size--;
       printf("elemento removido com sucesso");
       return ;
    }

    while(point!=NULL && point->data!=element){
        temp = point;
        point = point->next;
    }

    if(point==NULL){
        printf("Valor não encontrado");
        return ;
    }

    temp->next = point->next;
    free(point);
    list->size--;
}

void ShowList(List* list){
    el* temp = list->first;
    if(temp==NULL){
        printf("Lista esta vazia");
        return;
     }
    while(temp != NULL){
    printf("%d",temp->data);
    printf("\n");
    temp = temp->next;
    }
 printf("Tamanho da lista:  %d",list->size);
}

void LiberarLista(List* list){
    el* temp = list->first;
    while(temp != NULL){
        el* next = temp->next;
        free(temp);
        temp = next->next;
    }
    list->size = 0;
    list->first = NULL;
      printf("A lista deslocada.\n");
}

void _contains(List* list, int element){
   el* temp = list->first;
   if(temp==NULL){
    printf("Lista Vazia");
    return;
   }
    while(temp != NULL){
      if(temp->data==element){
        printf("Elemento %d esta presente na lista", element);
        return;
      }
      temp = temp->next;
    }
    printf("Elemento  %d não encontrado na lista", element);
}


#endif

