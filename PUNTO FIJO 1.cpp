#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float F_x(float x){
	return 2*pow(x,2)-x-5;
}
float G_x(float x){
	return pow(((x+5)/2),0.5);
}
int main (void)
{
	float x,xr,Fxr,e,error=0,test=100;
	printf("\n\t Raices de Polinomios: Punto Fijo");
	printf("\n\n Dame el Valor Inicial: ");
	scanf("%f",&x);
	printf("\n\n Dame el Error Permitido: ");
	scanf("%f",&e);
	while(e<=test)
	{
		xr=G_x(x);
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
