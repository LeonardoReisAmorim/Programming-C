#include <stdio.h>

float media(float a,float b,float c)
{
	return (a+b+c)/3;
}

main()
{
	float n1,n2,n3,resumedia;
	printf("digite a primeira nota: ");
	scanf("%f",&n1);
	printf("digite a segunda nota: ");
	scanf("%f",&n2);
	printf("digite a terceira nota: ");
	scanf("%f",&n3);
	
	resumedia=media(n1,n2,n3);
	
	printf("a media das 3 notas foram: %.2f",resumedia);
}
