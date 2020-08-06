#include <stdio.h>

main()
{
	int i,j,m[3][3],ma[3][3],par[18],a=0;
	
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
			if(m[i][j]%2==0){
				par[a]=m[i][j];
				a++;
			}
			else{
				par[a]=par[a];
			}
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(ma[i][j]%2==0){
				par[a]=m[i][j];
			}
			else{
				par[a]=par[a];
			}
		}
	}
	
	for(i=0;i<a;i++){
			printf("\nos valores pares das matrizes e: %d",par[i]);
	}
}
