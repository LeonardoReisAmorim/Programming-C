/*Faça um algoritmo que determine e escreva:
- a maior idade dos habitantes
- a quantidade de indivíduos entre 18 e 35 anos
O algoritmo deve solicitar ao usuário se ele quer continuar ou parar. Quando o usuário digitar 0 o
algoritmo para.
*/


#include <stdio.h>
main()
{
	int i=1,idade,maior,cont=0;
	
	while(i!=0)
	{
		printf("digite a idade do habitante\n");
		scanf("%d",&idade);
		
		if(idade>maior)
		{
			maior=idade;
		}
		else
		{
			maior=maior;
		}
		
		if(idade>= 18 && idade<=35)
		{
			cont++;
		}
		else
		{
			cont=cont;
		}
		printf("a maior idade dos habitantes e: %d\n",maior);
		printf("a quantidade de habitantes que tem idade entre 18 e 35 e: %d\n",cont);
		printf("digite 1-continuar; 0-parar");
		scanf("%d",&i);
	}
}
