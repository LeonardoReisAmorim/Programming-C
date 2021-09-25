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
        return sucesso;
    }
}

int inserirAluno_disciplina(Disciplinas disciplinas[], int qtd_discip, Alunos alunos[], int qtd_alunos){
    
    int i, j, matricula, cod;

    printf("\n------- Inserção de alunos nas disciplinas ------\n");
    printf("\nInforme a matrícula do aluno:");
    scanf("%d", &matricula);

    // verificar se matrícula já está cadastrada.

    printf("\nInforme o codigo da disciplina:");
    scanf("%d", &cod);

    for(i = 0; i < qtd_discip; i++){
        if(cod == disciplinas[i].codigo){
            disciplinas[i].id_aluno[disciplinas[i].qtd_alunos_disc] = matricula;
            disciplinas[i].qtd_alunos_disc++;
            return sucesso;

            //relatório disciplina
            printf("\n");
            printf("Codigo .....:  %d\n", disciplinas[i].codigo);
            printf("Nome .....:  %s\n", disciplinas[i].nome);
            printf("Semestre .....:  %d\n", disciplinas[i].semestre);
            printf("ID do professor.....:  %d\n", disciplinas[i].id_professor);
            printf("Alunos na disciplina:\n");
            for(j=0; j < disciplinas[i].qtd_alunos_disc; j++){
                printf("%d: %d\n", j+1, disciplinas[i].id_aluno[j]);
            }
            printf("Quantidade de alunos matriculados: %d\n", disciplinas[i].qtd_alunos_disc);
        }
    }
    return erro_cod_disciplina;
}