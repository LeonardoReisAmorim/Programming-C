#include <stdio.h>
#include <stdlib.h>
#include "ProjetoEscola.h"
#include "string.h"

void Listaralunos(Alunos alunos[], int qtd_alunos){
    if(qtd_alunos<0){
        printf("\nnao existem alunos cadastrados\n");
    }else{
        printf("\n------------ Listagem de alunos ------------n");
        int i;

        for(i=0;i<qtd_alunos;i++){
            printf("\n");
            printf("Matricula .....:  %d\n",alunos[i].matricula);
            printf("Nome .....:  %s\n",alunos[i].nome);
            printf("Sexo .....:  %c\n",alunos[i].sexo);
            printf("Data de nascimento .....:  %d/%d/%d\n",alunos[i].data_nasc.dia, alunos[i].data_nasc.mes, alunos[i].data_nasc.ano);
            printf("CPF .....:  %s\n",alunos[i].cpf);
        }
    }
}

int Inseriraluno(Alunos alunos[], int qtd_alunos){
    int validardata=0, validarcpf=0;

    printf("\n------------ Cadastro do aluno ------------\n");

    printf("\nDigite a matricula do aluno...: ");
    scanf("%d",&alunos[qtd_alunos].matricula);
    setbuf(stdin, 0);
    
    if (alunos[qtd_alunos].matricula<=0){
        return erro_matricula;
    }

    printf("\ndigite o nome do aluno...: ");
    fgets(alunos[qtd_alunos].nome, 100, stdin); 
    size_t ln = strlen(alunos[qtd_alunos].nome) - 1; //size_t = unsigned integer type
    if (alunos[qtd_alunos].nome[ln] == '\n'){
        alunos[qtd_alunos].nome[ln] = '\0';
    }
        
    printf("\ndigite o sexo do aluno...: ");
    scanf("%c", &alunos[qtd_alunos].sexo); 
    if (alunos[qtd_alunos].sexo != 'M' && alunos[qtd_alunos].sexo != 'F' && alunos[qtd_alunos].sexo != 'm' && alunos[qtd_alunos].sexo != 'f') {
        return erro_sexo;
    }

    printf("\nDigite o dia de nascimento do aluno....: ");
    scanf("%d", &alunos[qtd_alunos].data_nasc.dia);
   
    printf("\nDigite o mes de nascimento do aluno....: ");
    scanf("%d", &alunos[qtd_alunos].data_nasc.mes);
   
    printf("\nDigite o ano de nascimento do aluno....: ");
    scanf("%d", &alunos[qtd_alunos].data_nasc.ano);
    setbuf(stdin, 0);
    //validardata = validardata();
    if(validardata==1){
        return erro_data_nasc;
    }

    printf("\nDigite o CPF do aluno....: ");
    fgets(alunos[qtd_alunos].cpf, 16, stdin); 
    ln = strlen(alunos[qtd_alunos].cpf) - 1; 
    if (alunos[qtd_alunos].cpf[ln] == '\n'){
        alunos[qtd_alunos].cpf[ln] = '\0';
    }
    //validarcpf = validarcpf();
    if(validarcpf==1){
        return erro_cpf;
    }
     
    return sucesso;
}

int excluirAluno (Alunos alunos[], int qtd_alunos){
    
    int i, matricula, posicao = -1;

    printf("\n------------ Exclusão do aluno ------------\n");
    printf("\nInforme a matrícula do aluno a ser excluído: ");
    scanf("%d", &matricula);

    for(i = 0;  i < qtd_alunos; i++){
        if(matricula == alunos[i].matricula){
            posicao = i;
        }
    }

    if(posicao == -1){
        return 0;
    }
    else{
        for(i = posicao; i < qtd_alunos; i++){
        alunos[i] = alunos[i + 1];
        }
        alunos = realloc(alunos, --qtd_alunos * sizeof(Alunos));
        return 1;
    }
}