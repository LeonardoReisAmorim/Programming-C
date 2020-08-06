#include <stdio.h>

float media(float a,float b,float c,float d)
{
	return (a+b+c+d)/4;
}

main()
{
	float n1,n2,n3,n4,resumedia;
	printf("digite 4 valores: ");
	scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	
	resumedia=media(n1,n2,n3,n4);
	
	printf("o resultado e: %.2f",resumedia);
}
