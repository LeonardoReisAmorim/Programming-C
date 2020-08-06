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
			if(m[i][j]>10){
				soma+=m[i][j];
			}
			else{
				soma=soma;
			}
		}
	}
	printf("a soma dos valores maiores que 10 e: %d",soma);
}
