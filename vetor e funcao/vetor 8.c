#include <stdio.h>

main()
{
	int i;
	float v[10],soma=0,conti=0,cont=0;
	
	for(i=0;i<10;i++){
		printf("digite as notas de prova: ");
		scanf("%f",&v[i]);
	}
	for(i=0;i<10;i++){
		soma+=v[i];
		cont++;
		
			if(v[i]>7){
				conti++;
			}
			else{
				conti=conti;
			}
	}
	printf("a media das notas e: %.2f e quantidade de notas acima de 7 e:%.2f",soma/cont,conti);
}
