#include <stdlib.h>
#include <stdio.h>
#include "Metodos.h"


main()
{
	int opcion_final;
	system("cls");
	opcion_final=menu();
	do
	{
	switch(opcion_final)
	{
		case 1:
			printf("Este juego consiste en adivinar un n�mero que est� entre 1 y 999 denominado n�mero secreto");
			break;
		case 2:
			printf("\nEs un juego en el que se tiene que adivinar un n�mero de 4 cifras, es decir entre 1000 y 9999");
			break;
		case 3:
			printf("\nConsiste en una pila de monedas, de la cual el jugador y la computadora van sacando monedas hasta que ya no quedan m�s en la pila");
			break;	
		case 4:
			printf("\nEste juego cuenta con una base de palabras asociadas a la codificaci�n de algoritmos y al lenguaje de programaci�n C++");
			break;
		case 5:
			printf("\nUsted esta saliendo del programa...");
			break;
			
		default:
		printf("\n\n Ingrese un numero correcto");
		break;	
	}	
		printf("\n");
		system("pause");
	}while(opcion_final!=5);	
}

















