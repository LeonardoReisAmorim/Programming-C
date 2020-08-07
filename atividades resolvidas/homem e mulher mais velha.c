//pede a soma das idades do homem mais velho com a mulher mais nova e o produto das idades do homem mais novo com a mulher mais velha:

#include <stdio.h>
main()
{
	int h1,h2,m1,m2,hmv,mmv,hmn,mmn;
	
	printf("digite a idade do homem\n");
	scanf("%d",&h1);
	printf("digite a idade do homem\n");
	scanf("%d",&h2);
	
	printf("digite a idade da mulher\n");
	scanf("%d",&m1);
	printf("digite a idade da mulher\n");
	scanf("%d",&m2);
	
	if(h1 && m1 > h2 && m2)
	{
		hmv=h1;
		mmv=m1;
		hmn=h2;
		mmn=m2;
	}
	else
	if(h2 && m2 > h1 && m1)
	{
		hmv=h2;
		mmv=m2;
		hmn=h1;
		mmn=m1;
	}
	else
	if(h1 && m2 > h2 && m1)
	{
		hmv=h1;
		mmv=m2;
		hmn=h2;
		mmn=m1;
	}
	else 
	{
		hmv=h2;
		mmv=m1;
		hmn=h1;
		mmn=m2;
	}
	printf("a soma das idades do homem mais velho com a mulher mais nova e: %d\n ",hmv+mmn);
	printf("o produto das idades do homem mais novo com a mulher mais velha: %d\n ",hmn*mmv);
	
	
}
