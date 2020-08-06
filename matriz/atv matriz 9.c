#include <stdio.h>

main()
{
	int i,j,m1[3][3],m2[3][3],par[18],a=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores da matriz 1: %d-%d: ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores da matriz 2: %d-%d: ",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(m1[i][j]%2==0){
				par[a]=m1[i][j];
				a++;
			}
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(m2[i][j]%2==0){
				par[a]=m2[i][j];
				a++;
			}
		}
	}
	
	for(i=0;i<a;i++){
		printf("\npar: %d",par[i]);
	}
}
