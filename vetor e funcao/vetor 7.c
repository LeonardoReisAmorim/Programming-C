#include <stdio.h>

main(){
	int i;
	float v[10],maior=0,maiorcasa=0;
	
	for(i=0;i<10;i++){
		printf("digite sua media final: ");
		scanf("%f",&v[i]);
	}
	
	for(i=0;i<10;i++){
		if(v[i]>maior){
			maior=v[i];
		}
		else{
			maior=maior;
		}
	}
	printf("a maior media e: %.2f",maior);
}
