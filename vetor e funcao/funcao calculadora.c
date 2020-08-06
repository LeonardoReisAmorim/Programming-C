#include <stdio.h>

float so(float a,float b)
{
	return a+b;
}

float sub(float a,float b)
{
	return a-b;
}

float mult(float a,float b)
{
	return a*b;
}

float div(float a,float b)
{
	return a/b;
}

main()
{
	int op;
	float n1,n2,soma,subtracao,multiplicacao,divisao;
	
	printf("digite um valor: ");
	scanf("%f",&n1);
	printf("\ndigite outro valor: ");
	scanf("%f",&n2);
	
	printf("digite a operacao que deseja:\n1-adicao\n2-subtracao\n3-multiplicacao\n4-divisao\n");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1: 
		soma=so(n1,n2);
			printf("a soma e: %.2f",soma);
		break;
		
		case 2: 
		subtracao=sub(n1,n2);
			printf("a subtracao e: %.2f",subtracao);
		break;
		
		case 3: 
		multiplicacao=mult(n1,n2);
			printf("a multiplicacao e: %.2f",multiplicacao);
		break;
		
		case 4: 
		divisao=div(n1,n2);
			printf("a divisao e: %.2f",divisao);
		break;
		
		default: 
			printf("\nnao existe essa operacao");
	}
	
}
