#include <stdio.h>

main(){
	int i,cont=0,conti=0;
	float v[10],soma=0;
	for(i=0;i<6;i++){
		printf("digite os numeros: ");
		scanf("%f",&v[i]);
	}
	for(i=0;i<6;i++){
		soma=soma+v[i];
		cont++;
			if(v[i]<10){
				conti++;
			}
	}
	printf("a soma dos numeros do vetor e: %.2f\na media do vetor e: %.2f\ne a quantidade de numeros menores que 10 e: %d",soma,soma/cont,conti);
	
}
