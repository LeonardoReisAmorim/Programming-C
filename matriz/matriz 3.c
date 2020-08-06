#include <stdio.h>

main()
{
	int i,j,m[4][4],ma[4][4],soma[4][4];
	printf("-----------------matriz 1--------------------");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("\ndigite os valores: ");
			scanf("%d",&m[i][j]);
		}
	}
	printf("-----------------matriz 2--------------------");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("\ndigite os valores: ");
			scanf("%d",&ma[i][j]);
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			soma[i][j]=m[i][j]+ma[i][j];
			
				if(soma[i][j]%2==0){
					printf("\npar: %d",soma[i][j]);
				}
				else{
					printf("\nimpar: %d",soma[i][j]);
				}
		}
	}
}
