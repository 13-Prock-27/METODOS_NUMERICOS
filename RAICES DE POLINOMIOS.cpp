#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float F_x(float x){
	return (pow(x,3)+4*pow(x,2)-10);
}
void Biseccion(float xl,float xu,float e){
	float F_xl,F_xu,xr_ant,xr=0,F_xr,e_test,raiz,iter=0;
	bool state;
	do{
		iter++;
		xr=(xl+xu)/2;
		F_xl=F_x(xl);
		F_xu=F_x(xu);
		F_xr=F_x(xr);
		if((F_xl*F_xu)<0){
			if((F_xl*F_xr)>0){
				xl=xr;
			}
			else{
				xu=xr;
			}
		}
		xr_ant=xr;
		e_test=abs((xr-xr_ant)/xr);
		state=true;
		raiz=xr;
	}while((e_test<=e)&&(iter<10));
	printf("\n\n\n\tLa Raiz del polinomio es= %f \n\n\n\n",raiz);
}
int main (void){
	float xl,xu,e;
	printf("\t\nRaices de Polinomios: Biseccion.");
	printf("\n\n\nDame el valor del intervalo izquierdo (xl): ");
	scanf("%f",&xl);
	printf("\nDame el valor del intervalo derecho (xu): ");
	scanf("%f",&xu);
	printf("\nDame el valor de error minimo (e): ");
	scanf("%f",&e);
	Biseccion(xl,xu,e);
	system("pause");
	return 0;
}
