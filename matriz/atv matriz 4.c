#include <stdio.h>

main()
{
	int i,j,m[3][3],contpar=0,contimpar=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os numeros: %d-%d: ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(m[i][j]%2==0){
				contpar++;
			}
			else{
				contimpar++;
			}
		}
	}
	
	printf("\na quantidade de numeros pares e: %d\ne a quantidade de numeros impares e: %d",contpar,contimpar);
	
	
}
