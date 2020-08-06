#include <stdio.h>

main()
{
	int i,sexo;
	float idade,altura,mediaih,mediaalm,mediaim,contm,contf;
	
	for(i=1;i<=3;i++)
	{
		printf("digite 0-sexo feminino; 1-masculino\n");
		scanf("%d",&sexo);
		
		printf("digite a sua idade\n");
		scanf("%f",&idade);
		
		printf("digite a sua altura\n");
		scanf("%f",&altura);
		
		switch(sexo)
		{
			case 0:
			contf=contf+1;
			mediaalm=mediaalm+altura;
			mediaim=mediaim+idade;
			break;
			
			case 1:
			contm=contm+1;
			mediaih=mediaih+idade;
			break;
			
			default:
				printf("opcao invalida");
		}
		
	}
	printf("a media da idade do grupo e: %.2f\n",(mediaim+mediaih)/(contm+contf));
	printf("a media da altura das mulheres e: %.2f\n",mediaalm/contf);
	printf("a media da idade dos homens e: %.2f\n",mediaih/contm);
}
