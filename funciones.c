#include<stdio.h>
#include<stdlib.h>
#include"funciones.h"

int suma(int valorA,int valorB)
{
    return valorA + valorB;
}
int resta( int valorA, int valorB)
{
    return valorA - valorB;
}
double divide(int valorA, int valorB)
{    if(valorB !=0)
    {
        return valorA / valorB;
    }
    else
    {
        printf("No se puede dividir por cero...");
    }
    return 0;
}
int multiplica (int valorA, int valorB)
    {
        return valorA * valorB;
    }
int factorial(int valorA)
{
	if(valorA==1||valorA==0)
	{
		return 1;
	}else
	{
		return valorA*factorial(valorA-1);
	}
}
int factorialb(int valorB)
{
	if(valorB==1||valorB==0)
	{
		return 1;
	}else
	{
		return valorB*factorial(valorB-1);
	}
}
