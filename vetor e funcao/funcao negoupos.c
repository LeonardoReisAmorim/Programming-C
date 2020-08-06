#include <stdio.h>

void vernegoupos(int a)
{
	if(a>0){
		printf("este numero e positivo");
	}
	else
	if(a==0){
		printf("este numero e 0");
	}
	else{
		printf("este numero e negativo");
	}
}

main()
{
	int n;
	printf("digite um numero: ");
	scanf("%d",&n);
	
	vernegoupos(n);
}
