#include <stdio.h>

float soma(float a,float b)
{
	return a+b;
}

float subtracao(float a,float b)
{
	return a-b;
}

float multiplicacao(float a,float b)
{
	return a*b;
}

float divisao(float a,float b)
{
	return a/b;
}

main()
{
	float n1,n2,so,sub,mult,div;
	int op;
	printf("\n-----------------------------------------CALCULADORA---------------------------------------------------");
	printf("\ndigite o primeiro valor: ");
	scanf("%f",&n1);
	printf("\ndigite o segundo valor: ");
	scanf("%f",&n2);
	
	printf("\ndigite a operacao desejada\n1-adicao;\n2-subtracao;\n3-multiplicacao;\n4-divisao;\n\n");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			so=soma(n1,n2);
			printf("\na soma dos valores e: %.2f",so);
			break;
		case 2:
			sub=subtracao(n1,n2);
			printf("\na subtracao dos valores e: %.2f",sub);
			break;
		case 3:
			mult=multiplicacao(n1,n2);
			printf("\na multiplicacao dos valores e: %.2f",mult);
			break;
		case 4:
			div=divisao(n1,n2);
			printf("\na divisao dos valores e: %.2f",div);
			break;
			
		default: printf("\nopcao nao escolhida");
	}
	
}
