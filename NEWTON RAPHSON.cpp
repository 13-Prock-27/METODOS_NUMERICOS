#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float F_x(float x){
	return exp(-x)-x;
}
float Fp_x(float x){
	return -exp(-x)-1;
}
int main (void)
{
	float x,xr,Fxr,e,xe,error=0,test=10,fx,fpx;
	printf("\n\t Raices de Polinomios: Newton Raphson");
	printf("\n\n Dame el Valor Inicial: ");
	scanf("%f",&x);
	printf("\n\n Dame el Error Permitido: ");
	scanf("%f",&e);
	while(e<=test)
	{
		fx=F_x(x);
		fpx=Fp_x(x);
		xr=x-(fx/fpx);
		Fxr=F_x(xr);
		printf("\nxr= %f",xr);
		printf("\tF(xr)= %f",Fxr);
		if(xr>=Fxr)
		{
			x=xr;
		}
		test=0;
		test=fabs(((xr-error)/xr));
		printf("\tError= %f",test);
		if(error<=xr)
		{
			error=xr;
		}
		if(test<=e)
		{
			printf("\n\n\n\n\tLa raiz del polinomio es= %f",xr);
		}
	}
	printf("\tError= %f",test);
	printf("\n\n\n\n\n\n\n\n\n");
	system("pause");
	return 2020;
}
