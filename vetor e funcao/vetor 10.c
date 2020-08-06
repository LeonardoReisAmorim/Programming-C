#include <stdio.h>

main()
{
	int i,v[10],buscador,achei=0;
	
	for(i=0;i<10;i++){
		printf("digite os valores: ");
		scanf("%d",&v[i]);
	}
	
	printf("\ndigite o valor para ser buscado no vetor: ");
	scanf("%d",&buscador);
	
	for(i=0;i<10;i++){
		if(buscador==v[i]){
			printf("O valor e: %d\nNa posicao: %d",v[i],i);
			achei=1;
		}
		else{
			achei=achei;
		}
	}
	if(achei==0){
		printf("\neste valor nao existe no vetor");
	}
	else{
		achei=achei;
	}
}
