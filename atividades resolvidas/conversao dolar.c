#include <stdio.h>

float conversaodolar(float a,float b)
{
	return b/a;
}

main()
{
	float vcd,re,convdolar;
	
	printf(".............................");
	printf("conversao do dolar");
	printf("..............................\n\n\n\n");
	
	printf("\nqual o valor da cotacao do dolar?\n");
	scanf("%f",&vcd);
	printf("\nquantos reais tem?\n");
	scanf("%f",&re);
	
	convdolar=conversaodolar(vcd,re);
	
	printf("\na quantidade de dolares disponivel e: %.2f\n",convdolar);

system("pause");
}
