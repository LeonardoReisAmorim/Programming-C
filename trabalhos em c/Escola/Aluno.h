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

void Listaralunos(Alunos alunos[], int qtd_alunos);
int Inseriraluno(Alunos alunos[], int qtd_alunos);