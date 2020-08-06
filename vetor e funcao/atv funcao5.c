#include <stdio.h>

int verificador(int a)
{
	return a%2;
}

main()
{
	int n,ve;;
	
	printf("digite um numero: ");
	scanf("%d",&n);
	
	ve=verificador(n);
	
	if(ve==0){
		printf("\npar");
	}
	else{
		printf("\nimpar");
	}
}
