#define TAM 5
#define sucesso 1
#define erro_matricula 2
#define erro_data_nasc 3
#define erro_sexo 4
#define erro_cpf 5

typedef struct Data
{
    int dia, mes, ano;
}Data;

typedef struct Alunos
{
    int matrícula;
    char nome[100];
    char sexo; 
    Data data_nasc;
    char cpf[16];
}Alunos;

typedef struct Professores
{
    int matrícula;
    char nome[100];
    char sexo; 
    Data data_nasc;
    char cpf[16];
}Professores;

typedef struct Disciplinas
{
    char Nome[100]; 
    int codigo, semestre, id_professor;
}Disciplinas;