#include <stdio.h>
#include <stdlib.h>
#include "Aluno.h"
#include "Professor.h"
#include "Disciplinas.h"
#define TAM 5
#define sucesso 1
#define erro_matricula 2
#define erro_data_nasc 3
#define erro_sexo 4
#define erro_cpf 5
#define erro_cod_disciplina 6
#define erro_semestre_disciplina 7

int menu_principal();
int menu_cadastro();
int menu_exclusao();
int menu_alteracao();
int menu_relatorios();

int main()
{
    Alunos alunos[TAM];
    Professores professores[TAM];
    Disciplinas disciplinas[TAM];

    int opcao_principal, opcao_cadastro, opcao_exclusao, opcao_alteracao, opcao_relatorios, qtd_aluno = 0, qtd_prof = 0, qtd_disciplinas = 0, sair = 0, retorno=0;
    
    while (!sair){
    opcao_principal=menu_principal();
        switch (opcao_principal){
            case 0:
                sair = 1;
                break;
            case 1:
                opcao_cadastro=menu_cadastro();
                switch (opcao_cadastro){
                    case 1:
                        retorno = Inseriraluno(alunos, qtd_aluno);
                        if(retorno==1){
                            printf("\nMatricula realizada com sucesso\n");
                            qtd_aluno++;
                        }else if (retorno==2){
                            printf("\nMatricula invalida\n");
                        }else if(retorno==4){
                            printf("\nSexo Invalido\n");
                        } 
                        break;
                    case 2:
                        retorno = inserirProfessor(professores, qtd_prof);
                        if(retorno==1){
                            printf("\nMatricula realizada com sucesso!\n");
                            qtd_prof++;
                        }else if (retorno==2){
                            printf("\nMatricula invalida.\n");
                        }else if(retorno==4){
                            printf("\nSexo Invalido.\n");
                        } 
                        break;
                    case 3:
                        retorno = inserirDisciplina(disciplinas, qtd_disciplinas, professores, qtd_prof);
                        if(retorno==1){
                            printf("\nCadastro realizado com sucesso!\n");
                            qtd_disciplinas++;
                        }
                        else if(retorno==6){
                            printf("\nCodigo invalido.\n");
                        }
                        else if(retorno==2){
                            printf("\nMatricula do professor da disciplina invalida.\n");
                        }
                        break;
                    default:
                        printf("opcao invalida\n");
                        break;
                }
                break;
            case 2:
                opcao_exclusao=menu_exclusao();
                switch (opcao_exclusao){
                case 1:
                    retorno = excluirAluno(alunos, qtd_aluno);
                    if(retorno == 1)
                    {
                        printf("\nExclusão realizada com sucesso!\n");
                        qtd_aluno--;
                    }
                    else{
                        printf("Erro na exclusão. A matrícula informada é inválida.\n");
                    }
                    break;
                case 2:
                    retorno = excluirProfessor(professores, qtd_prof);
                    if(retorno == 1)
                    {
                        printf("\nExclusão realizada com sucesso!\n");
                        qtd_prof--;
                    }
                    else{
                        printf("Erro na exclusão. A matrícula informada é inválida.\n");
                    }
                    break;
                case 3:
                    retorno = excluirDisciplina(disciplinas, qtd_disciplinas);
                    if(retorno == 1)
                    {
                        printf("\nExclusão realizada com sucesso!\n");
                        qtd_disciplinas--;
                    }
                    else{
                        printf("Erro na exclusão. O codigo informado é invalido.\n");
                    }
                    break;
                default:
                    printf("opcao invalida\n");
                    break;
                }
                break;
            case 3:
                opcao_alteracao=menu_alteracao(); 
                switch (opcao_alteracao){
                case 1:
                    /* code */
                    break;
                case 2:
                    /* code */
                    break;
                case 3:
                    /* code */
                    break;
                default:
                    printf("opcao invalida\n");
                    break;
                }
                break;
            case 4:
                printf("Inserir aluno em uma disciplina\n");
                /**/
                break;
            case 5:
                printf("Excluir aluno de uma disciplina\n");
                /**/
                break;
            case 6:
                opcao_relatorios=menu_relatorios();
                switch (opcao_relatorios){
                    case 1:
                        if(qtd_aluno==0){
                            qtd_aluno=-1;
                        }
                        Listaralunos(alunos, qtd_aluno);
                        break;
                    case 2:
                        if(qtd_prof==0){
                            qtd_prof=-1;
                        }
                        listarProfessores(professores, qtd_prof);
                        break;
                    case 3:
                        if(qtd_disciplinas==0){
                            qtd_disciplinas=-1;
                        }
                        listarDisciplinas(disciplinas, qtd_disciplinas);
                        break;
                    case 4:
                        /* code */
                        break;
                    case 5:
                        if(qtd_aluno==0){
                            qtd_aluno=-1;
                        }
                        listar_por_sexo(alunos, qtd_aluno);
                        break;
                    case 6:
                        /* code */
                        break;
                    case 7:
                        /* code */
                        break;
                    case 8:
                        if(qtd_prof==0){
                            qtd_prof=-1;
                        }
                        listar_por_sexo_prof(professores, qtd_prof);
                        break;
                    case 9:
                        /* code */
                        break;
                    case 10:
                        /* code */
                        break;
                    case 11:
                        /* code */
                        break;
                    case 12:
                        /* code */
                        break;
                    case 13:
                        /* code */
                        break;
                    case 14:
                        /* code */
                        break;

                    default:
                        printf("opcao invalida\n");
                        break;
                }
                break;
            default:
                printf("opcao invalida\n");
                sair=1;
            break;
        }
    }
    
    return 0;
}

int menu_principal(){
    int opcao=0;

    printf("\nDigite a opcao:\n");
    printf("0 - Sair\n");
    printf("1 - Cadastro\n");
    printf("2 - Exclusao\n");
    printf("3 - Alteracao\n");
    printf("4 - Inserir aluno em uma disciplina\n");
    printf("5 - Excluir aluno de uma disciplina\n");
    printf("6 - Relatorios\n");
    scanf("%d",&opcao);

    return opcao;
}

int menu_cadastro(){
    int opcao=0;

    printf("\nDigite a opcao:\n");
    printf("1 - Cadastro de Aluno\n");
    printf("2 - Cadastro de Professor\n");
    printf("3 - Cadastro de Disciplina\n");
    scanf("%d",&opcao);

    return opcao;
}

int menu_exclusao(){
    int opcao=0;

    printf("\nDigite a opcao:\n");
    printf("1 - Excluir Aluno\n");
    printf("2 - Excluir Professor\n");
    printf("3 - Excluir Disciplina\n");
    scanf("%d",&opcao);

    return opcao;
}

int menu_alteracao(){
    int opcao=0;

    printf("\nDigite a opcao:\n");
    printf("1 - Alterar Aluno\n");
    printf("2 - Alterar Professor\n");
    printf("3 - Alterar Disciplina\n");
    scanf("%d",&opcao);

    return opcao;
}

int menu_relatorios(){
    int opcao=0;

    printf("\nDigite a opcao:\n");
    printf("1 - Listar Alunos:\n");
    printf("2 - Listar Professores:\n");
    printf("3 - Listar Disciplinas (dados da disciplina sem os alunos):\n");
    printf("4 - Listar uma disciplina (dados da disciplina e os alunos matriculados):\n");
    printf("5 - Listar Alunos por sexo (Masculino/Feminino):\n");
    printf("6 - Listar Alunos ordenados por Nome:\n");
    printf("7 - Listar Alunos ordenados por data de nascimento:\n");
    printf("8 - Listar Professores por sexo (Masculino/Feminino):\n");
    printf("9 - Listar Professores ordenados por Nome:\n");
    printf("10 - Listar Professores ordenados por data de nascimento:\n");
    printf("11 - Aniversariantes do mes:\n");
    printf("12 - Lista de pessoas (professor/aluno) a partir de uma busca:\n");
    printf("13 - Lista de alunos matriculados em menos de 3 disciplinas:\n");
    printf("14 - Lista de Disciplinas, com nome do professor, que extrapolam 40 vagas.:\n");
    scanf("%d",&opcao);

    return opcao;
}