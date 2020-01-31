#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float F_x(float x){
	return (pow(x,3)+4*pow(x,2)-10);
}
int main (void)
{
	float xl,xu,e,error=0,F_xl,F_xu,xr,F_xr,test=100;
	printf("\t\nRaices de Polinomios: Falsa Posicion.");
	printf("\n\n\nDame el valor del intervalo izquierdo (xl): ");
	scanf("%f",&xl);
	printf("\nDame el valor del intervalo derecho (xu): ");
	scanf("%f",&xu);
	printf("\nDame el valor de error minimo (e): ");
	scanf("%f",&e);	
	while(e<=test)
	{
		F_xl=F_x(xl);
		F_xu=F_x(xu);
		xr= xl-F_xl*((xu-xl)/(F_xu-F_xl));
		F_xr=F_x(xr);
		printf("\nxl= %f",xl);
		printf("\tF(xl)= %f",F_xl);
		printf("\txr= %f",xr);
		printf("\tF(xr)= %f",F_xr);
		if(F_xl*F_xr>0)
		{
			xl=xr;
		}
		test=0;
		test=fabs(((xr-error)/xr)*100);
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
