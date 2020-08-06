#include <stdio.h>
int i;
int j;

void preenche(int x[],int y)
{
	for(i=0;i<y;i++){
		printf("digite os valores: ");
		scanf("%d",&x[i]);
	}
}

void preenchefloat(float x[],int y)
{
	for(i=0;i<y;i++){
		printf("digite os valores: ");
		scanf("%f",&x[i]);
	}
}

void somavet(int x[],int y,int a[],int b[])
{
	for(i=0;i<y;i++){
		x[i]=a[i]+b[i];
	}
}

void imprime(int x[],int y)
{
	for(i=0;i<y;i++){
		printf("%d\t",x[i]);
	}
}

void paresimpares(int x[],int y)
{
	for(i=0;i<y;i++){
		if(x[i]%2==0){
			printf("\npares: %d",x[i]);
		}
		else{
			printf("\nimpares: %d",x[i]);
		}
	}
}

int qtpares(int x[],int y)
{
	int cont=0;
	for(i=0;i<y;i++){
		if(x[i]%2==0){
			cont++;
		}
		else{
			cont=cont;
		}
	}
	return cont;
}

int somavetim(int x[],int y)
{
	int soma=0;
	for(i=0;i<y;i++){
		if(x[i]>0){
			soma+=x[i];
		}
		else{
			soma=soma;
		}
	}
	return soma;
}

void mediavet(float x[],int y)
{
	float media,soma=0,cont=0;
	int conti=0;
	for(i=0;i<y;i++){
		soma+=x[i];
		cont++;
		media=soma/cont;
	}
	printf("\n\nmedia: %.2f",media);
	for(i=0;i<y;i++){
		if(x[i]>7){
			conti++;
		}
		else{
			conti=conti;
		}
	}
	printf("\n\n%d",conti);
}

void posicaopares(int x[],int y)
{
	for(i=0;i<y;i++){
		if(x[i]%2==0){
			printf("\n%d",i);
		}
	}
}

float indicemaior(float x[],int y)
{
	float maior=x[0],maiorpos=0;
	for(i=0;i<y;i++){
		if(x[i]>maior){
			maior=x[i];
			maiorpos=i;
		}
		else{
			maior=maior;
			maiorpos=maiorpos;
		}
	}
	return maior;
}

void poseimpar(int x[],int y)
{
	int cont=0,conti=0;
	for(i=0;i<y;i++){
		if(x[i]>0){
			cont++;
		}
		else{
			cont=cont;
		}
			if(x[i]%2!=0){
				conti++;
			}
			else{
				conti=conti;
			}
	}
	printf("\npos: %d",cont);
	printf("\nimpar: %d",conti);
}

void somamediamenor(int x[],int y)
{
	int soma=0,cont=0,conti=0;
	for(i=0;i<y;i++){
		soma+=x[i];
		cont++;
			if(x[i]<10){
				conti++;
			}
			else{
				conti=conti;
			}
	}
	printf("\nsoma: %d",soma);
	printf("\nmedia: %d",soma/cont);
	printf("\nquantidade: %d",conti);
}

int somanumeros(int a,int b,int c)
{
	return a+b+c;
}

float medianumeros(float a,float b,float c,float d)
{
	return (a+b+c+d)/4;
}

int parnumero(int a)
{
	int a1;
	if(a%2==0){
		a1=a*5;
	}
	return a1;
}

int imparnumero(int a)
{
	int a1;
	if(a%2!=0){
		a1=a/3;
	}
	return a1;
}

float medianotas(float a,float b,float c)
{
	return (a+b+c)/3;
}

void verificarnumero(int a)
{
	if(a%2==0){
		printf("\npar");
	}
	else{
		printf("\nimpar");
	}
}

int verificarposouneg(int x[],int y)
{
	int cont=0;
	for(i=0;i<y;i++){
		if(x[i]<0){
			cont++;
		}
		else{
			cont=cont;
		}
	}
	return cont;
}


void vetorparesimpares(int x[],int y,int z[],int w[])
{
	int a=0,b=0;
	for(i=0;i<y;i++){
		if(x[i]%2==0){
			z[a]=x[i];
			a++;
		}
		else{
			w[b]=x[i];
			b++;
		}
	}
	for(i=0;i<a;i++){
		printf("\n\npares: %d",z[i]);
	}
	for(i=0;i<b;i++){
		printf("\n\nimpares: %d",w[i]);
	}
}

void buscadorvet(int x[],int y,int z)
{
	int achei=0;
	for(i=0;i<y;i++){
		if(z==x[i]){
			printf("valor: %d\nposicao: %d",x[i],i);
			achei=1;
		}
		else{
			achei=achei;
		}
	}
	if(achei==0){
		printf("\nvalor nao encontrado");
	}
}

void quadradovet(float x[],int y,float z[])
{
	for(i=0;i<y;i++){
		z[i]=x[i]*x[i];
	}
}

void imprimevet(int x[],int y)
{
	for(i=0;i<y;i++){
		printf("%d\t",x[i]);
	}
}

void somaposicoes(int x[],int a,int b)
{
	int n1,n2,soma;
	n1=x[a];
	n2=x[b];
	soma=n1+n2;
	printf("\nsoma %d",soma);
}

void maioremenor(int x[],int y)
{
	int maior=x[0],menor=x[0];
	
	for(i=0;i<y;i++){
		if(x[i]>maior){
			maior=x[i];
		}
			if(x[i]<menor){
				menor=x[i];
			}
	}
	printf("\no maior e: %d",maior);
	printf("\no menor e: %d",menor);
}

void inversovet(int x[],int y,int z[])
{
	for(i=0;i<y;i++){
		z[i]=x[4-i];
	}
}

main()
{
	/*printf("-----------------------------exercicio 1--------------------\n\n");
	int v1[5],v2[5],v3[5];
	
	preenchervet(v1,5);
	printf("\n\n");
	preenchervet(v2,5);
	somavet(v3,5,v1,v2);
	printf("\n\n");
	imprime(v1,5);
	printf("\n\n");
	imprime(v2,5);
	printf("\n\n");
	imprime(v3,5);*/
	
	/*printf("-----------------------------exercicio 2-------------------\n\n");
	int v[5];
	preenche(v,5);
	paresimpares(v,5);*/
	
	/*printf("-----------------------------exercicio 2-------------------\n\n");
	int v[5],pares;
	preenche(v,5);
	pares=qtpares(v,5);
	printf("\n%d",pares);*/
	
	/*printf("-----------------------------exercicio 3-------------------\n\n");
	int v[5],soma;
	preenche(v,5);
	soma=somavetim(v,5);
	printf("\n%d",soma);*/
	
	/*printf("-----------------------------exercicio 4-------------------\n\n");
	int v[5];
	preenche(v,5);
	posicaopares(v,5);*/
	
	/*printf("-----------------------------exercicio 5-------------------\n\n");
	int v[5],maior;
	preenche(v,5);
	maior=indicemaior(v,5);
	printf("\n%d",maior);*/
	
	/*printf("-----------------------------exercicio 6-------------------\n\n");
	int v[5];
	preenche(v,5);
	poseimpar(v,5);*/

	/*printf("-----------------------------exercicio 7-------------------\n\n");
	int v[5];
	preenche(v,5);
	somamediamenor(v,5);*/
	
	/*printf("-----------------------------exercicio 8-------------------\n\n");
	int n1,n2,n3,soma;
	printf("digite o primeiro valor: ");
	scanf("%d",&n1);
	printf("digite o segundo valor: ");
	scanf("%d",&n2);
	printf("digite o terceiro valor: ");
	scanf("%d",&n3);
	soma=somanumeros(n1,n2,n3);
	printf("\n%d",soma);*/
	
	/*printf("-----------------------------exercicio 9-------------------\n\n");
	float n1,n2,n3,n4,media;
	printf("digite o primeiro valor: ");
	scanf("%f",&n1);
	printf("digite o segundo valor: ");
	scanf("%f",&n2);
	printf("digite o terceiro valor: ");
	scanf("%f",&n3);
	printf("digite o quarto valor: ");
	scanf("%f",&n4);
	media=medianumeros(n1,n2,n3,n4);
	printf("\n%.2f",media);*/
	
	/*printf("-----------------------------exercicio 10-------------------\n\n");
	int n1,par,impar;
	printf("digite um valor: ");
	scanf("%d",&n1);
	par=parnumero(n1);
	impar=imparnumero(n1);
	if(n1%2==0){
		printf("\n%d",par);
	}
	else{
		printf("\n%d",impar);
	}*/
	
	/*printf("-----------------------------exercicio 11-------------------\n\n");
	float n1,n2,n3,media;
	printf("digite a 1 nota: ");
	scanf("%f",&n1);
	printf("digite a 2 nota: ");
	scanf("%f",&n2);
	printf("digite a 3 nota: ");
	scanf("%f",&n3);
	media=medianotas(n1,n2,n3);
	printf("\n%.2f",media);*/
	
	/*printf("-----------------------------exercicio 12-------------------\n\n");
	int n1;
	printf("digite o valor: ");
	scanf("%d",&n1);
	verificarnumero(n1);*/
	
	/*printf("-----------------------------exercicio 13-------------------\n\n");
	int n1;
	printf("digite o valor: ");
	scanf("%d",&n1);
	verificarposouneg(n1);*/
	
	/*printf("-----------------------------exercicio 14-------------------\n\n");
	int m[3][3],ma[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores: ");
			scanf("%d",&m[i][j]);
		}
		
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores: ");
			scanf("%d",&ma[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",m[i][j]);
		}
	}
	printf("\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",ma[i][j]);
		}
	}*/
	
	/*printf("-----------------------------exercicio 15-------------------\n\n");
	int m[3][3],ma[3][3],mat[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores: ");
			scanf("%d",&m[i][j]);
		}
		
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores: ");
			scanf("%d",&ma[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat[i][j]=m[i][j]+ma[i][j];
		}
	}
	printf("\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(mat[i][j]%2==0){
				printf("\npar: %d\t",mat[i][j]);
			}else{
				printf("\nimpar: %d\t",mat[i][j]);
			}		
		}
	}*/
	
	/*printf("\n-----------------------------exercicio 16-------------------\n\n");
	int m[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores:%d-%d  ",i,j);
			scanf("%d",&m[i][j]);
		}	
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(m[i][j]%2!=0){
				printf("\n%d-%d",i,j);
			}
		}
	}*/
	
	/*printf("\n-----------------------------exercicio 17-------------------\n\n");
	int m[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores:%d-%d  ",i,j);
			scanf("%d",&m[i][j]);
		}	
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if((i+j)%2==0){
				printf("\n%d",m[i][j]); 
			}
		}
	}*/
	
	/*printf("\n-----------------------------exercicio 18-------------------\n\n");
	int m[3][3],ma[3][3],par[18],a=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores:%d-%d  ",i,j);
			scanf("%d",&m[i][j]);
		}	
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores:%d-%d  ",i,j);
			scanf("%d",&ma[i][j]);
		}	
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(m[i][j]%2==0){
				par[a]=m[i][j];
				a++;
			}
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(ma[i][j]%2==0){
				par[a]=ma[i][j];
				a++;
			}
		}
	}
	for(i=0;i<a;i++){
		printf("\n%d",par[i]);
	}*/
	
	/*printf("\n-----------------------------exercicio 19-------------------\n\n");
	int m[3][3],ma[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores:%d-%d  ",i,j);
			scanf("%d",&m[i][j]);
		}	
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores:%d-%d  ",i,j);
			scanf("%d",&ma[i][j]);
		}	
	}
	printf("\n\n");
	printf("\nprimeira matriz\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",m[i][j]*2);
		}
	}
	printf("\n\n");
	printf("\segunda matriz\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",ma[i][j]*4);
		}
	}*/
	
	/*printf("\n-----------------------------exercicio 20-------------------\n\n");
	int m[3][3],dp=0,ds=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores:%d-%d  ",i,j);
			scanf("%d",&m[i][j]);
		}	
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				dp+=m[i][j];
			}
			else{
				dp=dp;
			}
		}	
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if((i+j)==2){
				ds+=m[i][j];
			}
			else{
				ds=ds;
			}
		}	
	}
	if(dp==ds){
		printf("\nsao iguais");
	}
	else{
		printf("\nnao sao iguais");
	}*/
	
	/*printf("\n-----------------------------exercicio 21-------------------\n\n");
	int m[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores:%d-%d  ",i,j);
			scanf("%d",&m[i][j]);
		}	
	}
	printf("\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				printf("%d\t",m[i][j]);
			}
		}
	}*/
	
	/*printf("\n-----------------------------exercicio 22-------------------\n\n");
	int m[3][3],soma=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores:%d-%d  ",i,j);
			scanf("%d",&m[i][j]);
		}	
	}
	printf("\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i!=j){
				soma+=m[i][j];
			}
			else{
				soma=soma;
			}
		}
	}
	printf("\n%d",soma);*/
	
	/*printf("\n-----------------------------exercicio 23-------------------\n\n");
	int m[3][3],cont=0,conti=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores:%d-%d  ",i,j);
			scanf("%d",&m[i][j]);
		}	
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(m[i][j]%2==0){
				cont++;
			}
			else{
				conti++;
			}
		}
	}
	printf("\npar: %d",cont);
	printf("\nimpar: %d",conti);*/
	
	/*printf("\n-----------------------------exercicio 24-------------------\n\n");
	int m[3][3],soma=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores:%d-%d  ",i,j);
			scanf("%d",&m[i][j]);
		}	
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(m[i][j]>10){
				soma+=m[i][j];
			}
			else{
				soma=soma;
			}
		}
	}
	printf("\n%d",soma);*/
	
	/*printf("\n-----------------------------exercicio 25-------------------\n\n");
	float v[5],maior;
	preenchefloat(v,5);
	maior=indicemaior(v,5);
	printf("\n%.2f",maior);*/
	
	/*printf("\n-----------------------------exercicio 26-------------------\n\n");
	float v[5],media;
	int cont=0;
	preenchefloat(v,5);
	mediavet(v,5);*/
	
	/*printf("\n-----------------------------exercicio 27-------------------\n\n");
	int v[5],par[5],impar[5];
	preenche(v,5);
	vetorparesimpares(v,5,par,impar);*/
	
	/*printf("\n-----------------------------exercicio 28-------------------\n\n");
	int v[5],buscador;
	preenche(v,5);
	printf("digite o valor para ser buscado: ");
	scanf("%d",&buscador);
	buscadorvet(v,5,buscador);*/
	
	/*printf("\n-----------------------------exercicio 29-------------------\n\n");
	float v[5],v1[5];
	preenchefloat(v,5);
	quadradovet(v,5,v1);
	printf("\n\n");
	imprimevet(v,5);
	printf("\n\n");
	imprimevet(v1,5);*/
	
	/*printf("\n-----------------------------exercicio 30-------------------\n\n");
	int v[5],x,y;
	preenche(v,5);
	printf("digite a primeira posicao do vetor: ");
	scanf("%d",&x);
	printf("digite a segunda posicao do vetor: ");
	scanf("%d",&y);
	somaposicoes(v,x,y);*/
	
	/*printf("\n-----------------------------exercicio 31-------------------\n\n");
	int v[5];
	preenche(v,5);
	maioremenor(v,5);*/
	
	/*printf("\n-----------------------------exercicio 32-------------------\n\n");
	int v[5],v1[5];
	preenche(v,5);
	inversovet(v,5,v1);
	printf("\n\n");
	imprimevet(v,5);
	printf("\n\n");
	imprimevet(v1,5);*/
	
	/*printf("\n-----------------------------exercicio 33-------------------\n\n");
	int v[5],ve,so;
	preenche(v,5);
	ve=verificarposouneg(v,5);
	printf("\n%d",ve);
	so=somavetim(v,5);
	printf("\n%d",so);*/
}
