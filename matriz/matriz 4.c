#include <stdio.h>

main()
{
	int i,j,m[4][4],dp=0,ds=0;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("digite os valores: ");
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==j){
				dp+=m[i][j];
			}
			else{
				dp=dp;
			}
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i+j==3){
				ds+=m[i][j];
			}
			else{
				ds=ds;
			}
		}
	}
	
	if(dp==ds){
		printf("a soma dos elementos sao iguais");
	}
	else{
		printf("a soma dos elementos sao diferentes");
	}
	
}
