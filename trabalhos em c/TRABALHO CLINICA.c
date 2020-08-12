/*Uma clinica que realiza exames de imagem (mamografia, raio x, ultrassonografia , etc...) está precisando de um sistema simples para realização
de cadastro de exames diários.

Todos os dias são distribuídas 30 senhas para atendimento na clinica. Depois de distribuídas as senhas, são realizados os cadastros dos
pacientes e seus respectivos exames.

Para realizar o cadastro do paciente são solicitados os seguintes dados: (CPF,nome, sobrenome, idade, sexo), junto com esses dados ainda são
cadastrados o tipo de exame a ser realizado, o nome do médico.

Cada tipo de exame possui um código que o identifica:

- 001 – raio x

- 002 – mamografia

- 003 – ultrassonografia

- 004 – ressonância

Os funcionários que irão utilizar o sistema deverão ter acesso mediante a digitação do código de acesso (102030), sem esse código o usuário
não terá acesso ao menu principal.

Após cadastrar todos os clientes, os funcionários deverão imprimir todas fichas com os dados cadastrados para que possa iniciar o atendimento
dos exames.

Todos os pacientes cadastrados deverão ser consultados no sistema pelo seu CPF.

No final do expediente serão realizadas as seguintes consultas:

- A quantidade de cada exame realizado

- O exame mais realizado no dia

- A quantidade de pessoas atendidas separadas por sexo

- Os dados dos pacientes que realizaram exame de mamografia
*/

#include <stdio.h>
#include <string.h>
int i;

typedef struct dados{
	char nome[15];
	char sobrenome[15];
	int idade;
	int sexo;
	char exame[17];
}dados;
  
void preenchedados(dados x[],int y)
{
	printf("\n========================================CADASTRO==========================================\n");
	for(i=0;i<y;i++){
		printf("PACIENTE %d\n",i+1);
		
		printf("\nDigite seu nome......: ");
		scanf("%s",&x[i].nome);
		 
		printf("\nDigite seu sobrenome.......: ");
		scanf("%s",&x[i].sobrenome);
		
		printf("\nDigite sua idade:  ");
		scanf("%d",&x[i].idade);
		  
		printf("\nDigite seu sexo\n1 - masculino:\n2 - feminino:\n");
		scanf("%d",&x[i].sexo);
		printf("\n");  
		printf("\nTipos de exames:\n\n- raio-x\n\n- mamografia\n\n- ultrassonografia\n\n- ressonancia\n\n\nDigite seu tipo de exame.......:   ");
		scanf("%s",&x[i].exame);
		printf("\n==================================================================================================\n");
		printf("\n\n");
	}	
}  

void imprimedados(dados x[],int y)
{
	printf("\n===================================EXAMES CADASTRADOS===========================================\n");
	for(i=0;i<y;i++){
		printf("PACIENTE %d\n",i+1);
		printf("\n\nSeu nome e: %s",x[i].nome);
		printf("\nSeu sobrenome e: %s",x[i].sobrenome);
		printf("\nSua idade e: %d",x[i].idade);
			if(x[i].sexo==1){
				printf("\nSeu sexo e: masculino");
			}
			else{
				printf("\nSeu sexo e: feminino");
			}
		printf("\nSeu tipo de exame e: %s",x[i].exame);
		printf("\n==================================================================================================\n");
		printf("\n\n");
	}
	getchar();
	getchar();
}

void pesquisadadosnome(dados x[],int y)
{
	char nome[15];
	int resultado,cont=0,achei=0;
	printf("\n==================================================================================================\n");
	printf("\nDigite o nome do paciente que deseja pesquisar....:  ");
	scanf("%s",&nome);
	printf("\n\n");
	for(i=0;i<y;i++){
		resultado=strcmp(x[i].nome,nome);
		if(resultado==0){
			printf("\n======================================PACIENTE PESQUISAD0=================================\n");
			printf("PACIENTE %d\n",i+1);
			printf("\n\nSeu nome e: %s",x[i].nome);
			printf("\nSeu sobrenome e: %s",x[i].sobrenome);
			printf("\nSua idade e: %d",x[i].idade);
				if(x[i].sexo==1){
					printf("\nSeu sexo e: masculino");
				}
				else{
					printf("\nSeu sexo e: feminino");
				}
			printf("\nSeu tipo de exame e: %s",x[i].exame);
			printf("\n\n");
			cont++;
			achei=1;
		}
		else{
			achei=achei;
		}
	}
	if(achei==0){
		printf("\npaciente nao encontrado\n");
	}
	printf("\neste nome aparece %d vezes\n",cont);
	getchar();
	getchar();
}

void pesquisardadossobrenome(dados x[],int y)
{
	int resultado,cont=0,achei=0;
	char sobrenome[15];
	printf("\n==================================================================================================\n");
	printf("\ndigite o sobrenome do paciente que deseja pesquisar....:  ");
	scanf("%s",&sobrenome);
	for(i=0;i<y;i++){
		resultado=strcmp(x[i].sobrenome,sobrenome);
		if(resultado==0){
			printf("\n======================================PACIENTE PESQUISAD0=================================\n");
			printf("PACIENTE %d\n",i+1);
			printf("\n\nSeu nome e: %s",x[i].nome);
			printf("\nSeu sobrenome e: %s",x[i].sobrenome);
			printf("\nSua idade e: %d",x[i].idade);
				if(x[i].sexo==1){
					printf("\nSeu sexo e: masculino");
				}
				else{
					printf("\nSeu sexo e: feminino");
				}
			printf("\nSeu tipo de exame e: %s",x[i].exame);
			printf("\n\n");
			cont++;
			achei=1;
		}
		else{
			achei=achei;
		}	
	}
	if(achei==0){
		printf("\npaciente nao encontrado\n");
	}
	printf("\neste sobrenome aparece %d vezes\n",cont);
	getchar();
	getchar();
}

void pesquisardadosidade(dados x[],int y)
{
	int idade,cont=0,achei=0;
	printf("\n======================================================================================================\n");
	printf("\ndigite a idade do paciente que deseja pesquisar...: ");
	scanf("%d",&idade);
	if(idade>=18){
		for(i=0;i<y;i++){
			if(x[i].idade==idade){
				printf("\n======================================PACIENTE PESQUISAD0=================================\n");
				printf("PACIENTE %d\n",i+1);
			printf("\n\nSeu nome e: %s",x[i].nome);
			printf("\nSeu sobrenome e: %s",x[i].sobrenome);
			printf("\nSua idade e: %d",x[i].idade);
				if(x[i].sexo==1){
					printf("\nSeu sexo e: masculino");
				}
				else{
					printf("\nSeu sexo e: feminino");
				}
			printf("\nSeu tipo de exame e: %s",x[i].exame);
			printf("\n\n");
				cont++;
				achei=1;
			}
			else{
				cont=cont;
				achei=achei;
			}
		}
	}
	else{
		printf("\nmenor de idade, proibido mostrar\n");
	}
	if(achei==0){
		printf("\npaciente nao encontrado\n");
	}
	printf("\nesta idade aparece %d vezes\n",cont);
	getchar();
	getchar();
}

void pesquisardadossexo(dados x[],int y)
{
	int cont=0,achei=0,sexo;
	printf("\n==================================================================================================\n");
	printf("\ndigite o sexo do paciente que deseja pesquisar:\n1 - masculino\n2 - feminino\n");
	scanf("%d",&sexo);
	for(i=0;i<y;i++){
		if(x[i].sexo==sexo){
			printf("\n======================================PACIENTE PESQUISAD0=================================\n");
			printf("PACIENTE %d\n",i+1);
			printf("\n\nSeu nome e: %s",x[i].nome);
			printf("\nSeu sobrenome e: %s",x[i].sobrenome);
			printf("\nSua idade e: %d",x[i].idade);
				if(x[i].sexo==1){
					printf("\nSeu sexo e: masculino");
				}
				else{
					printf("\nSeu sexo e: feminino");
				}
			printf("\nSeu tipo de exame e: %s",x[i].exame);
			printf("\n\n");
			achei=1;
			cont++;
		}
		else{
			achei=achei;
		}
	}
	if(achei==0){
		printf("\npaciente nao encontrado\n");
	}
	printf("\neste sexo aparece %d vezes\n",cont);
	getchar();
	getchar();
}

void pesquisardadosexame(dados x[],int y)
{
	char exame[17];
	int resultado,cont=0,achei=0;
	printf("\n==================================================================================================\n");
	printf("\ndigite o tipo de exame que queira pesquisar.....:  ");
	scanf("%s",&exame);
	for(i=0;i<y;i++){
		resultado=strcmp(x[i].exame,exame);
		if(resultado==0){
			printf("\n======================================PACIENTE PESQUISAD0=================================\n");
			printf("PACIENTE %d\n",i+1);
			printf("\n\nSeu nome e: %s",x[i].nome);
			printf("\nSeu sobrenome e: %s",x[i].sobrenome);
			printf("\nSua idade e: %d",x[i].idade);
				if(x[i].sexo==1){
					printf("\nSeu sexo e: masculino");
				}
				else{
					printf("\nSeu sexo e: feminino");
				}
			printf("\nSeu tipo de exame e: %s",x[i].exame);
			printf("\n\n");
			achei=1;
			cont++;
		}
		else{
			achei=achei;
		}
	}
	if(achei==0){
		printf("\npaciente nao encontrado\n");
	}
	printf("\neste tipo de exame aparece %d vezes\n",cont);
	getchar();
	getchar();
}

main()
{
	dados pacientes[2];	
	int ca,j=0,cd,a;
	
	printf("\nCadastrar exames:\n1 - Sim\n2 - Nao\n");
	scanf("%d",&a);
	
	if(a==1){
		
		while(j==0){
		system("cls");
			printf("\n==========================================MENU===========================================\n");
			printf("\n\n1 - Cadastrar exame:\n\n2 - Mostrar exames:\n\n3 - Pesquisar exame:\n\n4 - Sair;\n");
			scanf("%d",&ca);
			
		switch(ca){
			case 1: 
				preenchedados(pacientes,2);
			break;
			case 2:
				imprimedados(pacientes,2);
			break;
			
			case 3:
				printf("\n========================================================================================================\n");
				printf("\n1 - Pesquisar por nome\n\n2 - Pesquisar por sobrenome\n\n3 - Pesquisar por idade\n\n4 - Pesquisar por sexo\n\n5 - pesquisar por tipo de exame\n");
				scanf("%d",&cd);
				switch(cd){
					case 1:
						pesquisadadosnome(pacientes,2);
					break;
					
					case 2:
						pesquisardadossobrenome(pacientes,2);
					break;
					
					case 3:
						pesquisardadosidade(pacientes,2);
					break;
					
					case 4:
						pesquisardadossexo(pacientes,2);
					break;
					
					case 5:
						pesquisardadosexame(pacientes,2);
					break;
					
					default: 
						printf("\nopcao invalida");
				}
				break;
			
			case 4:
				j=1;
			break;
			default:
				printf("\ncomando invalido\n");
		}
		}
	}
	else{
		printf("\nNao continuando com o sistema");
		}
}
