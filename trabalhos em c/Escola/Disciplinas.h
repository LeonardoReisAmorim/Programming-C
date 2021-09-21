typedef struct Disciplinas
{
    char nome[100]; 
    int codigo, semestre, id_professor;
}Disciplinas;

int inserirDisciplina (Disciplinas disciplinas[], int qtd_discip, Professores professores[], int qtd_prof);