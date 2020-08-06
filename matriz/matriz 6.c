#include <stdio.h>

main()
{
	int i,j,m[3][3],soma=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores: ");
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i!=j){
				soma+=m[i][j];
			}
			else{
				soma=soma;
			}
		}
	}
	
	printf("\na soma dos numeros com indices diferentes e: %d",soma);
}
