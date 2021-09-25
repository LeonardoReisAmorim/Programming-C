#define TAM_ALUNO_DISC 5

typedef struct Disciplinas
{
    char nome[100]; 
    int codigo, semestre, id_professor, id_aluno[TAM_ALUNO_DISC], qtd_alunos_disc;
}Disciplinas;

int inserirDisciplina (Disciplinas disciplinas[], int qtd_discip, Professores professores[], int qtd_prof);
void listarDisciplinas(Disciplinas Disciplinas[], int qtd_discip);
int excluirDisciplina (Disciplinas disciplinas[], int qtd_discip);
int inserirAluno_disciplina(Disciplinas disciplinas[], int qtd_discip, Alunos alunos[], int qtd_alunos);