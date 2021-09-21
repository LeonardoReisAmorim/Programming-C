#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ProjetoEscola.h"

int inserirDisciplina (Disciplinas disciplinas[], int qtd_discip, Professores professores[], int qtd_prof){
    int i,j;
    qtd_prof--;
    setbuf(stdin, 0);
    printf("\n%d",qtd_prof);
    printf("\n%d",professores[qtd_prof].matricula);

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
    
    //Verificando se a matricula informada é válida e já foi cadastrada.
    for(i = 0; i <= qtd_discip; i++){
        for (j=0; j<=qtd_prof; j++){
           if(disciplinas[i].id_professor == professores[j].matricula){
                return sucesso;
           }
        }
    }
    return erro_matricula;
}