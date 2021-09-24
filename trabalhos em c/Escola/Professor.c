  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ProjetoEscola.h"

void listarProfessores (Professores professores[], int qtd_professores){
    if(qtd_professores<0){
        printf("\nnao existem professores cadastrados\n");
    }else{
        printf("\n------------ Listagem de professores ------------n");
        int i;

        for(i=0;i<qtd_professores;i++){
            printf("\n");
            printf("Matricula .....:  %d\n", professores[i].matricula);
            printf("Nome .....:  %s\n", professores[i].nome);
            printf("Sexo .....:  %c\n", professores[i].sexo);
            printf("Data de nascimento .....:  %d/%d/%d\n", professores[i].data_nasc.dia, professores[i].data_nasc.mes, professores[i].data_nasc.ano);
            printf("CPF .....:  %s\n", professores[i].cpf);
        }
    }
}

int inserirProfessor (Professores professores[], int qtd_professores){
    int validardata=0, validarcpf=0;

        printf("\n------------ Cadastro do professor ------------\n");

        printf("\nDigite a matricula do professor(a)..: ");
        scanf("%d",&professores[qtd_professores].matricula);
        setbuf(stdin, 0);
        
        if (professores[qtd_professores].matricula<=0){
            return erro_matricula;
        }

        printf("\ndigite o nome do professor(a)...: ");
        fgets(professores[qtd_professores].nome, 100, stdin); 
        size_t ln = strlen(professores[qtd_professores].nome) - 1; //size_t = unsigned integer type
        if (professores[qtd_professores].nome[ln] == '\n'){
            professores[qtd_professores].nome[ln] = '\0';
        }
            
        printf("\ndigite o sexo do professor(a)...: ");
        scanf("%c", &professores[qtd_professores].sexo); 
        if (professores[qtd_professores].sexo != 'M' && professores[qtd_professores].sexo != 'F' && professores[qtd_professores].sexo != 'm' && professores[qtd_professores].sexo != 'f') {
            return erro_sexo;
        }

        printf("\nDigite o dia de nascimento do professor(a)....: ");
        scanf("%d", &professores[qtd_professores].data_nasc.dia);
    
        printf("\nDigite o mes de nascimento do professor(a)....: ");
        scanf("%d", &professores[qtd_professores].data_nasc.mes);
    
        printf("\nDigite o ano de nascimento do professor(a)....: ");
        scanf("%d", &professores[qtd_professores].data_nasc.ano);
        setbuf(stdin, 0);
        //validardata = validardata();
        if(validardata==1){
            return erro_data_nasc;
        }

        printf("\nDigite o CPF do professor(a)....: ");
        fgets(professores[qtd_professores].cpf, 16, stdin); 
        ln = strlen(professores[qtd_professores].cpf) - 1; 
        if (professores[qtd_professores].cpf[ln] == '\n'){
            professores[qtd_professores].cpf[ln] = '\0';
        }
        //validarcpf = validarcpf();
        if(validarcpf==1){
            return erro_cpf;
        }
        
        return sucesso;
}

int excluirProfessor (Professores professores[], int qtd_professores){
    
    int i, matricula, posicao = -1;

    printf("\n------------ Exclusão do professor ------------\n");
    printf("\nInforme a matrícula do professor(a) a ser excluído(a): ");
    scanf("%d", &matricula);

    for(i = 0;  i < qtd_professores; i++){
        if(matricula == professores[i].matricula){
            posicao = i;
        }
    }

    if(posicao == -1){
        return 0;
    }
    else{
        for(i = posicao; i < qtd_professores; i++){
        professores[i] = professores[i + 1];
        }
        //professores = realloc(professores, --qtd_professores * sizeof(Professores));
        return 1;
    }
}

void listar_por_sexo_prof(Professores professor[], int qtd_prof){

    int i, sexo=0,achou=0;
    char sexo_informado;

    if(qtd_prof<0){
        printf("\nnao existem professores cadastrados\n");
    }else{ 
        setbuf(stdin, 0);
        printf("\ndigite o sexo a ser listado...: ");
        scanf("%c",&sexo_informado);
        if(sexo_informado == 'm' || sexo_informado == 'M'){
            printf("\n------------ Sexo masculino ------------\n");
                for(i=0;i<qtd_prof;i++){
                    if(professor[i].sexo == 'm' || professor[i].sexo == 'M'){
                        printf("\n");
                        printf("Matricula .....:  %d\n",professor[i].matricula);
                        printf("Nome .....:  %s\n",professor[i].nome);
                        printf("Sexo .....:  %c\n",professor[i].sexo); 
                        printf("Data de nascimento .....:  %d/%d/%d\n",professor[i].data_nasc.dia, professor[i].data_nasc.mes, professor[i].data_nasc.ano);
                        printf("CPF .....:  %s\n",professor[i].cpf);
                        achou=1;
                    }else{
                        sexo=1;
                    }
                }
                if(sexo==1 && achou==0){
                    printf("\nnao existem professores do sexo masculino cadastrados\n");
                }
        }else if(sexo_informado == 'f' || sexo_informado == 'F'){
            printf("\n\n");
    
            printf("\n------------ Sexo feminino ------------\n");
            for(i=0;i<qtd_prof;i++){
                if(professor[i].sexo == 'f' || professor[i].sexo == 'F'){
                    printf("\n");
                    printf("Matricula .....:  %d\n",professor[i].matricula);
                    printf("Nome .....:  %s\n",professor[i].nome);
                    printf("Sexo .....:  %c\n",professor[i].sexo); 
                    printf("Data de nascimento .....:  %d/%d/%d\n",professor[i].data_nasc.dia, professor[i].data_nasc.mes, professor[i].data_nasc.ano);
                    printf("CPF .....:  %s\n",professor[i].cpf);
                    achou=1;
                }else{
                    sexo=1;
                }
            }
            if(sexo==1 && achou==0){
                printf("\nnao existem professores do sexo femininos cadastrados\n");  
            }
        }
    } 
}