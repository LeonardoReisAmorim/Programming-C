#include <stdio.h>
#include <stdlib.h>

main ()
{
	int op,i=1;
	float n1,n2;
	while(i!=0)
	{
		printf("----------------------- C A L C U L A D O R A ----------------------------------\n\n");
  
  printf("\ndigite a sua operacao:\n 1- adicao:\n 2-subtracao:\n 3-multiplicacao:\n 4-divisao:\n ");
  scanf("%d",&op);
  
  switch(op)
  {
  	case 1:
  		printf("\ndigite um numero para adicao:  ");
  		scanf("%f",&n1);
  		printf("\ndigite o segundo numero:  ");
  		scanf("%f",&n2);
  		
  		printf("\na adicao entre %.2f e %.2f e: %.2f\n",n1,n2,n1+n2);
  		printf("\ndigite 1-continuar a calculadora; 0-parar: ");
  	scanf("%d",&i);
  		break;
  		
  	case 2:
  		printf("\ndigite um numero para subtracao:  ");
  		scanf("%f",&n1);
  		printf("\ndigite o segundo numero:  ");
  		scanf("%f",&n2);
  		
  		printf("\na subtracao entre %.2f e %.2f e: %.2f\n",n1,n2,n1-n2);
  		printf("\ndigite 1-continuar a calculadora; 0-parar: ");
  	scanf("%d",&i);
  		break;
  		
  	case 3:
  		printf("\ndigite um numero para multiplicacao:  ");
  		scanf("%f",&n1);
  		printf("\ndigite o segundo numero:  ");
  		scanf("%f",&n2);
  		
  		printf("\na multiplicacao entre %.2f e %.2f e: %.2f\n",n1,n2,n1*n2);
  		printf("\ndigite 1-continuar a calculadora; 0-parar: ");
  	scanf("%d",&i);
  		break;
  		
  	case 4:
  		printf("\ndigite um numero para divisao:  ");
  		scanf("%f",&n1);
  		printf("\ndigite o segundo numero:  ");
  		scanf("%f",&n2);
  		
  		printf("\na divisao entre %.2f e %.2f e: %.2f\n",n1,n2,n1/n2);
  		printf("\ndigite 1-continuar a calculadora; 0-parar: ");
  	scanf("%d",&i);
  		break;
  		
  	default: 
  		printf("\ncomando invalido\n");
  	
  	printf("digite 1-continuar a calculadora; 0-parar: ");
  	scanf("%d",&i);
  }
}
  system ("pause");
  return 0;
}

