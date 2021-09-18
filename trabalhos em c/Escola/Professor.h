typedef struct Professores
{
    int matricula;
    char nome[100];
    char sexo; 
    Data data_nasc;
    char cpf[16];
}Professores;

void listarProfessores (Professores professores[], int qtd_professores);
int inserirProfessor (Professores professores[], int qtd_professores);
int excluirProfessor (Professores professores[], int qtd_professores);