#include <stdio.h>

main(){
	int i,v[10],cont=0,conti=0;
	
	for(i=0;i<10;i++){
		printf("digite os valores: ");
		scanf("%d",&v[i]);
	}
	for(i=0;i<10;i++)
	{
		if(v[i]>0){
			cont++;
		}
		else{
			cont=cont;
		}
			if(v[i]%2!=0){
				conti++;
			}
			else{
				conti=conti;
			}
	}
	printf("a quantidade de valores positivos sao: %d e a quantidade de valores impares sao: %d",cont,conti);
}
