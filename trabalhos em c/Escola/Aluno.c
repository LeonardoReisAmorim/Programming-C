#include <stdio.h>
#include <stdlib.h>
#include "ProjetoEscola.h"
#include "string.h"

void Listaralunos(Alunos alunos[], int qtd_alunos){
    setbuf(stdin,0);
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
    setbuf(stdin,0);
    printf("\n------------ Cadastro do aluno ------------\n");

    printf("\nDigite a matricula do aluno...: ");
    scanf("%d",&alunos[qtd_alunos].matricula);
    setbuf(stdin, 0);
    
    if (alunos[qtd_alunos].matricula<=0){
        return erro_matricula;
    }

    // Adicionar verificação de matrícula com matrículas já cadastradas.

    printf("\ndigite o nome do aluno...: ");
    fgets(alunos[qtd_alunos].nome, 100, stdin); 
    size_t ln = strlen(alunos[qtd_alunos].nome) - 1; 
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
    setbuf(stdin,0);
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
        return sucesso;
    }
}

void listar_por_sexo(Alunos alunos[], int qtd_alunos){
    int i, sexo=0,achou=0;
    char sexo_informado;
    setbuf(stdin,0);
    if(qtd_alunos<0){
        printf("\nnao existem alunos cadastrados\n");
    }else{ 
        printf("\ndigite o sexo a ser listado...: ");
        scanf("%c",&sexo_informado);
        //printf("%c", &sexo_informado);
        if(sexo_informado == 'm' || sexo_informado == 'M'){
            printf("\n------------ Sexo masculino ------------\n");
                for(i=0;i<qtd_alunos;i++){
                    if(alunos[i].sexo == 'm' || alunos[i].sexo == 'M'){
                        printf("\n");
                        printf("Matricula .....:  %d\n",alunos[i].matricula);
                        printf("Nome .....:  %s\n",alunos[i].nome);
                        printf("Sexo .....:  %c\n",alunos[i].sexo); 
                        printf("Data de nascimento .....:  %d/%d/%d\n",alunos[i].data_nasc.dia, alunos[i].data_nasc.mes, alunos[i].data_nasc.ano);
                        printf("CPF .....:  %s\n",alunos[i].cpf);
                        achou=1;
                    }else{
                        sexo=1;
                    }
                }
                if(sexo==1 && achou==0){
                    printf("\nnao existem alunos do sexo masculino cadastrados\n");
                }
        }else if(sexo_informado == 'f' || sexo_informado == 'F'){
            printf("\n\n");
    
            printf("\n------------ Sexo feminino ------------\n");
            for(i=0;i<qtd_alunos;i++){
                if(alunos[i].sexo == 'f' || alunos[i].sexo == 'F'){
                    printf("\n");
                    printf("Matricula .....:  %d\n",alunos[i].matricula);
                    printf("Nome .....:  %s\n",alunos[i].nome);
                    printf("Sexo .....:  %c\n",alunos[i].sexo); 
                    printf("Data de nascimento .....:  %d/%d/%d\n",alunos[i].data_nasc.dia, alunos[i].data_nasc.mes, alunos[i].data_nasc.ano);
                    printf("CPF .....:  %s\n",alunos[i].cpf);
                    achou=1;
                }else{
                    sexo=1;
                }
            }
            if(sexo==1 && achou==0){
                printf("\nnao existem alunos do sexo femininos cadastrados\n");  
            }
        }
    }
}

void listar_aluno_busca(Alunos alunos[], int qtd_alunos){
    char nome[100];
    int i=0,resultado,achei=0;;
    setbuf(stdin,0);
    printf("\n------------ Buscar aluno ------------\n");
    
    printf("\nDigite o nome do aluno que deseja pesquisar....:  ");
	fgets(nome, 101, stdin);
    size_t ln = strlen(nome) - 1; 
    if (nome[ln] == '\n'){
        nome[ln] = '\0';
    }
	for(i=0;i<qtd_alunos;i++){
		resultado=strcmp(alunos[i].nome,nome);
		if(resultado==0){
			printf("\n======================================LISTA DE ALUNOS COM O NOME: %s =================================\n",nome);
            printf("Matricula .....:  %d\n",alunos[i].matricula);
            printf("Nome .....:  %s\n",alunos[i].nome);
            printf("Sexo .....:  %c\n",alunos[i].sexo); 
            printf("Data de nascimento .....:  %d/%d/%d\n",alunos[i].data_nasc.dia, alunos[i].data_nasc.mes, alunos[i].data_nasc.ano);
            printf("CPF .....:  %s\n",alunos[i].cpf);
			achei=1;
		}
	}
	if(achei==0){
		printf("\naluno nao encontrado\n");
	}
}