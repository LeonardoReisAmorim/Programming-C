typedef struct Data
{
    int dia, mes, ano;
}Data;

typedef struct Alunos
{
    int matricula;
    char nome[100];
    char sexo; 
    Data data_nasc;
    char cpf[16];
}Alunos;

void Listaralunos(Alunos alunos[], int qtd_alunos);
int Inseriraluno(Alunos alunos[], int qtd_alunos);
int excluirAluno (Alunos alunos[], int qtd_alunos);
void listar_por_sexo(Alunos alunos[], int qtd_alunos);
void listar_aluno_busca (Alunos alunos[], int qtd_alunos);