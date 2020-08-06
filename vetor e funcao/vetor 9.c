#include <stdio.h>

main()
{
	int i,v[6],par[6],impar[6],a=0,b=0;
	
	for(i=0;i<6;i++){
		printf("digite os valores: ");
		scanf("%d",&v[i]);
	}
	
	for(i=0;i<6;i++){
		if(v[i]%2==0){
			par[a]=v[i];
			a++;
		}
		else{
			impar[b]=v[i];
			b++;
		}
	}
	
	for(i=0;i<a;i++){
		printf("\nos valores pares sao: %d",par[i]);
	}
	
	for(i=0;i<b;i++){
		printf("\nos valores impares sao: %d",impar[i]);
	}
}
