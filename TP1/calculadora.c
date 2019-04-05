#include <stdio.h>
#include <stdlib.h>

#include "calculadora.h"

int calculadora(int eleccion, int operador1, int operador2, int resultado)
{
    int fact1 = 1;
    int fact2 = 1;
    int i;
    int a;

    do
    {
        system("CLS");

        printf("CALCULADORA\n\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Factoreo\n\n");
        printf("6. Salir\n\n");

        scanf("%d", &eleccion);

        switch(eleccion)
		{
		    case 1:
                printf("Introduce un numero: ");
		        scanf("%d", &operador1);
		        printf("Introduce otro numero: ");
		        scanf("%d", &operador2);

		        resultado = operador1 + operador2;

				printf("La suma de %d y %d es: %d\n", operador1, operador2, resultado);
		    break;

		    case 2:
		        printf("Introduce un numero: ");
		        scanf("%d", &operador1);
		        printf("Introduce otro numero: ");
		        scanf("%d", &operador2);

		        resultado = operador1 - operador2;

		        printf("La resta de %d y %d es: %d\n", operador1, operador2, resultado);
		    break;

		    case 3:
		        printf("Introduce un numero: ");
		        scanf("%d", &operador1);
		        printf("Introduce otro numero: ");
		        scanf("%d", &operador2);

		        resultado = operador1 * operador2;

		        printf("La multiplicacion de %d y %d es: %d\n", operador1, operador2, resultado);
		    break;

		    case 4:
		        printf("Introduce un numero: ");
		        scanf("%d", &operador1);
		        printf("Introduce otro numero: ");
		        scanf("%d", &operador2);

		        if(operador2 == 0)
		        {
		            printf("No se puede dividir entre 0, intentalo otra  vez...\n ");
		        }
		        else
		        {
		            resultado = (float)operador1 / operador2;
		            printf("La division de %d y %d es: %f\n", operador1, operador2, resultado);
		        }
		    break;

		    case 5:
		        printf("Introduce un numero: ");
		        scanf("%d",&operador1);
		        printf("Introduce otro numero: ");
		        scanf("%d",&operador2);

                for(i=1; i<=operador1; i++)
                {
                    fact1 = fact1 * i;
                }

                for(a=1; a<=operador2; a++)
                {
                    fact2 = fact2 * a;
                }

                printf("El factorial de %d es: %d\nY el factorial de %d es: %d\n\n", operador1, fact1, operador2, fact2);
            break;

		    case 6:
		        printf("Saliendo...\n\n");
		}
        system("PAUSE");

    }while(!(eleccion==6));
}

