#include<stdio.h>

int main()
{
	
	float pago_hora, sueldo, horas_extra, horas;
	
	
	printf("Ingresa las horas trabajadas del empleado:\n");
	scanf("%f", &horas);
	if (horas<=0)
	{
		printf("\nIngresa horas mayores a cero");
		return 1;
	}
	
	printf("\nIngresa el pago por hora del empleado:\n");
	scanf("%f", &pago_hora);
	if (pago_hora<=0)
	{
		printf("\nIngresa pagos mayores a cero");
		return 1;
	}
	
	if(horas>40)
	{
		horas_extra=(horas-40)*(pago_hora*1.20);
		sueldo=(40*pago_hora)+horas_extra;
	}
	
	else if(horas<=40 && horas>=30)
	{
		sueldo=horas*pago_hora;
	}
	
	else if(horas<30)
	{
		sueldo=horas*pago_hora*0.88;
	}
	
	printf("el sueldo del empleado es: %.2f", sueldo);
	
	return 0;
}