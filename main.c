#include<stdio.h>
#include<stdlib.h>
#include"funciones.h"

int main()

{

    int valorA=0,valorB=0,opcion;
    char seguir='s';
    do
	{
        printf("\nIngrese una opcion:\n\n");
		printf("1- Ingresar 1er operando (A= %d)\n",valorA);
        printf("2- Ingresar 2do operando (B= %d)\n",valorB);
        printf("3- Calcular todas las operaciones\n");
        printf("4- Informe de resultados\n");
        printf("5- Salir\n");
        scanf("%d",&opcion);
        while(opcion<1||opcion>5)
                {
                    printf("por favor ingrese una de las opciones");
                    scanf("%d",&opcion);
                }
        switch(opcion)
                {
                    case 1:
                             system("cls");
                             scanf("%d",&valorA);
                             break;
                    case 2:
                             system("cls");
                             scanf("%d",&valorB);
                             break;
                    case 3:
                             system("cls");
                             suma (valorA, valorB);
                             resta(valorA, valorB);
                             divide(valorA, valorB);
                             multiplica(valorA, valorB);
                             factorial(valorA);
                             factorialb(valorB);
                             printf ("Las operaciones se hicieron con exito! ");
                        break;
                    case 4:
                             system("cls");
                             printf("El resultado de A+B es: %d\n", suma (valorA, valorB));
                             printf("El resultado de A-B es: %d\n", resta(valorA, valorB));
                             printf("El resultado de A/B es: %.2f\n", divide(valorA, valorB));
                             printf("El resultado de AxB es: %d\n", multiplica(valorA, valorB));
                             printf("El resultado de A! es: %d\n", factorial(valorA));
                             printf("El resultado de B! es: %d\n", factorialb(valorB));

                        break;
                    case 5:
                             system("cls");
                             seguir='n';
                             break;
                             default:{}
                             break;
                }
	}while(seguir=='s');
	system("pause");
    return 0;
}
