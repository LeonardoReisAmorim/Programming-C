/*Escrever um algoritmo que leia um conjunto de 50 informações contendo, cada uma delas, a
altura e o sexo de uma pessoa (código=1, masculino código=2, feminino), calcule e mostre o
seguinte:
a) a maior altura da turma
b) a média da altura dos homens
c) a média da altura da turma.
*/


#include <stdio.h>

main()
{
	int i,sexo;
	float altura,maior,conth,conta,contma,contm;
	for(i=1; i<=3; i++)
	{
		printf("\ndigite a altura\n");
		scanf("%f",&altura);
		
		printf("\ndigite o seu sexo, 1-masculino; 2-feminino\n");
		scanf("%d",&sexo);		
			switch(sexo)
			{
				case 1:
					conth=conth+1;
					conta=conta+altura;
					break;
				
				case 2:
					contm=contm+1;
					contma=contma+altura;
					break;
				
				default:
					printf("comando invalido");
			}
			
		if(altura>maior)
		{
			maior=altura;
		}
	}
	printf("a maior altura da turma e: %.2f\n",maior);
	printf("a media da altura dos homens e: %.2f\n",conta/conth);
	printf("a media da altura da turma e: %.2f\n",(conta+contma)/(conth+contm));
	
system("pause");
}
