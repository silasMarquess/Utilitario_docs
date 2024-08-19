#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "entidades.c"

int main()
{
    Aluno alunos[10];
    int num=10;
    int *point;
    point = &num;

    printf("%d",point);

    
/*
    for(int i =0;i<10;i++){
        strcpy(alunos[i].nome," ");
        strcpy(alunos[i].disciplina," ");
        alunos[i].nota=0;
    }

    for(int index =0;index<5;index++){
        printf("Dados do Aluno: %d\n",(index+1));
        printf("Nome:");
        scanf("%[^\n]",& alunos[index].nome);
        printf("Disciplina:");
        scanf("%s",& alunos[index].disciplina);
        printf("Nota:");
        scanf("%f",& alunos[index].nota);
    }
*/
    return 0;
}




