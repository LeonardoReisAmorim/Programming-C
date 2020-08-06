#include <stdio.h>

main()
{
	int i,j,m[3][3],ma[3][3],multi1[3][3],multi2[3][3];
	
	printf("-----------matriz 1---------");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\ndigite os valores: ");
			scanf("%d",&m[i][j]);
		}
	}
	printf("\n-----------matriz 2---------");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\ndigite os valores: ");
			scanf("%d",&ma[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			multi1[i][j]=m[i][j]*2;
		}
	}
	
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			multi2[i][j]=m[i][j]*4;
		}
	}
	
	printf("\n-----------multi 1---------");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nos valores sao: %d",multi1[i][j]);
		}
	}
	printf("\n-----------multi 2---------");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nos valores sao: %d",multi2[i][j]);
		}
	}
}
