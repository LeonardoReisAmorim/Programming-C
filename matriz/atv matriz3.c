#include <stdio.h>

main()
{
	int i,j,m[3][3],soma;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os numeros: %d-%d: ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
		
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i!=j){
				soma=soma+m[i][j];
			}
			else{
				soma=soma;
			}
		}
	}
	
	printf("a soma dos numeros que possuem indices diferentes e: %d",soma);
}
