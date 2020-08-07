//mercadinho macas

#include <stdio.h>
main()
{
	float x,ma=0.7,vd;
	
	printf("............................");
	printf("mercadinho macas");
	printf("............................\n\n\n");
	
	printf("\nquantas macas quer?\n");
	scanf("%f",&x);
	if (x<=5)
	{
		vd=(x+ma)*0.05;
		printf("\no valor final com desconto de 5 e: %.2f\n",(x*ma)-vd);
	}
	else
	if (x<=10)
	{
		vd=(x+ma)*0.1;
		printf("\no valor final com desconto de 10 e: %.2f\n",(x*ma)-vd);
	}
	else
	{
		vd=(x+ma)*0.15;
		printf("\no valor final com desconto de 15 e: %.2f\n",(x*ma)-vd);
	}
system("pause");
return 0;
}
