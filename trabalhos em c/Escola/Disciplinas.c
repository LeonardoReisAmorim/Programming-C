#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ProjetoEscola.h"

int inserirDisciplina (Disciplinas disciplinas[], int qtd_discip, Professores professores[], int qtd_prof){
    int i;

    printf("\n------------ Cadastro de Disciplina ------------\n");

    printf("\nDigite o codigo da disciplina: ");
    scanf("%d", &disciplinas[qtd_discip].codigo);
    setbuf(stdin, 0);

    if(disciplinas[qtd_discip].codigo <= 0){
        return erro_cod_disciplina;
    }

    printf("\nDigite o nome da disciplina: ");
    fgets(disciplinas[qtd_discip].nome, 100, stdin); 
    size_t ln = strlen(disciplinas[qtd_discip].nome) - 1; //size_t = unsigned integer type
    if (disciplinas[qtd_discip].nome[ln] == '\n'){
        disciplinas[qtd_discip].nome[ln] = '\0';
    }

    printf("\nInforme o semestre da disciplina: ");
    scanf("%d", &disciplinas[qtd_discip].semestre);
    setbuf(stdin, 0);

    if(disciplinas[qtd_discip].semestre <= 0){
        return erro_semestre_disciplina;
    }

    printf("\nInforme a matricula do professor da disciplina: ");
    scanf("%d", &disciplinas[qtd_discip].id_professor);
    setbuf(stdin, 0);

    /* 
    Verificando se a matricula informada é válida e já foi cadastrada.

    for(i = 0; i < qtd_prof; i++){
        if(disciplinas[qtd_discip].id_professor == professores[qtd_prof].matricula){
            return sucesso;
        }
    }
    return erro_matricula;
    */ 
}

void listarDisciplinas(Disciplinas disciplinas[], int qtd_discip){
    int i;
    
    if(qtd_discip<0){
        printf("\nNao existem disciplinas cadastradas.\n");
    }else{
        printf("\n------------ Listagem de disciplinas ------------\n");

        for(i = 0; i < qtd_discip; i++){
            printf("\n");
            printf("Codigo .....:  %d\n", disciplinas[i].codigo);
            printf("Nome .....:  %s\n", disciplinas[i].nome);
            printf("Semestre .....:  %d\n", disciplinas[i].semestre);
            printf("ID do professor.....:  %d\n", disciplinas[i].id_professor);
        }
    }
}

int excluirDisciplina (Disciplinas disciplinas[], int qtd_discip){

    
    int i, codigo, posicao = -1;

    printf("\n------------ Exclusão de disciplina ------------\n");
    printf("\nInforme o codigo da disciplina a ser excluída: ");
    scanf("%d", &codigo);

    for(i = 0;  i < qtd_discip; i++){
        if(codigo == disciplinas[i].codigo){
            posicao = i;
        }
    }

    if(posicao == -1){
        return 0;
    }
    else{
        for(i = 0; i < qtd_discip; i++){
        disciplinas[i] = disciplinas[i + 1];
        }
        //disciplinas = realloc(disciplinas, --qtd_discip * sizeof(Disciplinas));
        return sucesso;
    }
}