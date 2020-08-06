#include <stdio.h>

main()
{
	int i,j,m[3][3],soma;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores: ");
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			soma=i+j;
			if(soma%2==0){
				printf("\n%d",m[i][j]);
			}
		}
	}
	
	
}
