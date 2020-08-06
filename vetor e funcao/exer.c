#include <stdio.h>
#include <string.h>
int i,j,cont=0,conti=0,achei=0;

void preenchevet(int x[],int y)
{
	for(i=0;i<y;i++){
		printf("\ndigite os valores: ");
		scanf("%d",&x[i]);
		printf("\n\n");
	}
}

void imprimevet(int x[],int y)
{
	for(i=0;i<y;i++){
		printf("\nvalores: %d",x[i]);
	}
}

void exer(int x[],int y)
{
	for(i=0;i<y;i++){
		
	}
}



main()
{
	/*printf("EXERCICIO 1\n");
	float n1,n2,s,su,m,d;
	printf("\ndigite o primeiro numero: ");
	scanf("%f",&n1);
	printf("\ndigite o segundo numero: ");
	scanf("%f",&n2);
	s=soma(n1,n2);
	su=subtracao(n1,n2);
	m=multiplicacao(n1,n2);
	d=divisao(n1,n2);
	printf("\nsoma = %.2f\nsubtracao = %.2f\nmultiplicacao = %.2f\ndivisao = %.2f",s,su,m,d);*/
	
	/*printf("EXERCICIO 1\n");
	float n1,n2,d;
	printf("\ndigite a distancia: ");
	scanf("%f",&n1);
	printf("\ndigite o total de combustivel: ");
	scanf("%f",&n2);
	d=divisao(n1,n2);
	printf("\nconsumo medio = %.2f",d);*/
	
	/*printf("EXERCICIO 1\n");
	float f,c;
	printf("\ndigite a temp em celsius: ");
	scanf("%f",&c);
	f=fah(c);
	printf("\nfah = %.2f",f);*/

	/*printf("EXERCICIO 1\n");
	float cd,d,r;
	printf("\nqual a cotacao do dolar: ");
	scanf("%f",&cd);
	printf("\nquanto dolar tem: ");
	scanf("%f",&d);
	r=cd*d;
	printf("\nem real = %.2f",r);*/
	
	/*int n;
	printf("numero: ");
	scanf("%d",&n);
	if(n>=100 && n<=200){
		printf("\n%d",n);
	}
	else{
		printf("\nnao ta");
	}*/
	
	/*int op,h;
	printf("\nnivel:\n1\n2\n3\n");
	scanf("%d",&op);
	switch(op){
		case 1:
			printf("\nhoras: ");
			scanf("%d",&h);
			printf("\nsalario: %d",12*h);
		break;
		case 2:
			printf("\nhoras: ");
			scanf("%d",&h);
			printf("\nsalario: %d",17*h);
		break;
		case 3:
			printf("\nhoras: ");
			scanf("%d",&h);
			printf("\nsalario: %d",25*h);
		break;
		default:
			printf("\na");
		break;
	}*/
	
	/*float e,b,n,v;
	printf("\neleitores:  ");
	scanf("%f",&e);
	printf("\nbrancos: ");
	scanf("%f",&b);
	printf("\nnulos:  ");
	scanf("%f",&n);
	printf("\nvalidos: ");
	scanf("%f",&v);
	printf("\nporcentagem branco: %.1f",(b/e)*100);*/
	
	/*int x,y,s;
	printf("\n1: ");
	scanf("%d",&x);
	printf("\n2: ");
	scanf("%d",&y);
	s=((x*x)+(y*y));
	printf("\n%d",s);*/
	
	/*int p,m,e;
	printf("\npeso peixe: ");
	scanf("%d",&p);
	if(p>50){
		e=p-50;
		printf("\nexcesso: %d",e);
		m=e*4;
		printf("\nmulta: %d",m);
	}
	else{
		printf("\nnao ha excesso");
	}*/
	
	/*int op,q;
	printf("\nescolha: 1 - 1001\n2 - 1324\n3 - 6548\n4 - 0987\n5 - 7623\n");
	scanf("%d",&op);
	switch(op){
		case 1:
			printf("\nquantidade: ");
			scanf("%d",&q);
			printf("\npreco: %d",q*5);
		break;
		case 2:
			printf("\nquantidade: ");
			scanf("%d",&q);
			printf("\npreco: %d",q*6);
		break;
		case 3:
			printf("\nquantidade: ");
			scanf("%d",&q);
			printf("\npreco: %d",q*2);
		break;
		case 4:
			printf("\nquantidade: ");
			scanf("%d",&q);
			printf("\npreco: %d",q*5);
		break;
		case 5:
			printf("\nquantidade: ");
			scanf("%d",&q);
			printf("\npreco: %d",q*6);
		break;
		default:
			printf("\ntem nao");
	}*/
	
	/*int c,s;
	printf("\ncodigo: ");
	scanf("%d",&c);
	if(c!=1234){
		printf("\ninvalido");
	}
	else{
		printf("\nsenha: ");
		scanf("%d",&s);
		if(s!=9999){
			printf("\nnegado");
		}
		else{
			printf("\npermitido");
		}
	}*/
	
	/*int h1,h2,m1,m2;
	printf("\n1 homem: ");
	scanf("%d",&h1);
	printf("\n2 homem: ");
	scanf("%d",&h2);
	printf("\n1 mulher: ");
	scanf("%d",&m1);
	printf("\n2 mulher: ");
	scanf("%d",&m2);
	if(h1<h2 && m1<m2){
		printf("\n%d",h1*m2);
		printf("\n%d",h2+m1);
	}
	else
	if(h2<h1 && m2<m1){
		printf("\n%d",h1+m2);
		printf("\n%d",h2*m1);
	}
	else
	if(h1<h2 && m2<m1){
		printf("\n%d",h2+m2);
		printf("\n%d",h1*m1);
	}
	else{
		printf("\n%d",h1+m1);
		printf("\n%d",h2*m2);
	}*/
	
	/*float v;
	int op;
	printf("\nveiculo: ");
	scanf("%f",&v);
	printf("\n1 - álcool – 25%, 2 - gasolina – 21%, 3 - diesel –14%, 4 – elétrico – 25%\n");
	scanf("%d",&op);
	switch(op){
		case 1:
			printf("\nvalor - %.2f\ndesconto - %.2f",v,v*0.75);
		break;
		case 2:
			printf("\nvalor - %.2f\ndesconto - %.2f",v,v*0.79);
		break;
		case 3:
			printf("\nvalor - %.2f\ndesconto - %.2f",v,v*0.86);
		break;
		case 4:
			printf("\nvalor - %.2f\ndesconto - %.2f",v,v*0.75);
		break;
		default:
			printf("\na");
		break;
	}*/
	
	/*for(i=100;i<=200;i++){
		if(i%2!=0){
			printf("\n%d",i);
		}
	}*/
	
	/*int n;
	for(i=0;i<10;i++){
		printf("\ndigite um valor: ");
		scanf("%d",&n);
		if(n>=10 && n<=20){
			cont++;
		}
		else{
			conti++;
		}
	}
	printf("\n%d\n%d",cont,conti);*/
	
	/*int v[5];
	preenchevet(v,5);
	exer(v,5);*/
	
	/*int n;
	printf("\nnumero: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		printf("\n%d * %d = %d",n,i,n*i);
	}*/
	
	/*int n1,n2,s=0;
	printf("\n1: ");
	scanf("%d",&n1);
	printf("\n2: ");
	scanf("%d",&n2);
	for(i=n1;i<=n2;i++){
		s+=i;
	}
	printf("\nsoma: %d",s);*/
	
	/*int m[3][3],dp=0,ds=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\ndigite: ");
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
			if(i+j==2){
				ds+=m[i][j];
			}
		}
	}
	if(dp==ds){
		printf("\ndiagonais sao iguais\n%d\n%d",dp,ds);
	}
	else{
		printf("\ndiagonais sao diferentes\n%d\n%d",dp,ds);
	}*/
	
	/*int m[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\ndigite: ");
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				printf("\n%d",m[i][j]);
			}
		}
	}*/
	
	/*int m[3][3],s=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\ndigite: ");
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i!=j){
				s+=m[i][j];
			}
			else{
				s=s;
			}
		}
	}
	printf("\nsoma: %d",s);*/
	
	int m[3][3],s=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\ndigite: ");
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i!=j){
				s+=m[i][j];
			}
			else{
				s=s;
			}
		}
	}
}
