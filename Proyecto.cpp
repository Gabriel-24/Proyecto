#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "Metodos.h"

void MayMen();
void Adivinium();
void warcoin();

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
			MayMen();
			break;
		case 2:
			Adivinium();
			break;
		case 3:
			printf("\nConsiste en una pila de monedas, de la cual el jugador y la computadora van sacando monedas hasta que ya no quedan más en la pila");
			break;	
		case 4:
			printf("\nEste juego cuenta con una base de palabras asociadas a la codificación de algoritmos y al lenguaje de programación C++");
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


void MayMen()
{
	int numero_aleatorio=0,intentos=0,intentos_falso=1,contador=9, numero_ingresado, numero_mayor=999, numero_menor=1;
	printf("\n--Este juego consiste en adivinar un numero que esta entre 1 y 999 denominado numero secreto--");
	printf("\n1. Itentos para encontrar el numero: 10");
	printf("\n2. El puntaje obtenido depende de la cantidad de intentos");
	printf("\n3. Al perder o ganar el juego se mostrara el numero secreto");
	
	srand(time(NULL));
	numero_aleatorio=1+rand()%(999);
	
	
	do
	{
		printf("\n\nIngrese un numero: ");
		scanf("%d",&numero_ingresado);
		if(numero_ingresado>numero_aleatorio)
		{
			printf("\nIntento %d: ",intentos_falso);
			numero_mayor=numero_ingresado-1;
			printf("\nEl numero secreto es mayor y se encuentra entre %d y %d",numero_mayor,numero_menor);
			
			
		}
		if(numero_ingresado<numero_aleatorio)
		{
			printf("\nIntento %d: ",intentos_falso);
			numero_menor=numero_ingresado+1;
			printf("\nEl numero secreto es menor y se encuentra entre %d y %d",numero_mayor,numero_menor);
		}
		
	intentos=intentos+1;
	contador=contador-1;
	intentos_falso=intentos_falso+1;
		
	}while(numero_ingresado!=numero_aleatorio and contador<11 and contador>=0);
	
	if(numero_ingresado==numero_aleatorio)
		{
			printf("\nAcertaste! Puntaje obtenido: %d ",intentos);
		}
		else
		{
			printf("\n\nNo acerto el numero ingresado ");
			printf("\n\nEl numero aleatorio es: %d",numero_aleatorio);
		}
}

void Adivinium()
{
	int puntaje=1,numero_aleatorio,numero_ingresado;
	int primer, segundo, tercero, cuarto;
	int a,b,c,d;
	
	
	
	srand(time(NULL));
	numero_aleatorio=1000+rand()%(10000-1000);
	
	

	
	printf("\n\nEl numero aleatorio es: %d",numero_aleatorio);
	printf("\n --Es un juego en el que se tiene que adivinar un numero de 4 cifras entre 1000 y 9999--");
	printf("\n1.Intentos para encontrar el numero: 10");
	printf("\n2.El puntaje obtenido depende de la cantidad de intentos");
	printf("\n4.Si el jugador adivina el numero gana la partida");
	printf("\n5.Se te indicara las posiciones que ocupan los numeros ingresados (misma posicion o otra posicion)(1 vez como maximo)");
	
	
	
	
	
	
	
	
	
	
	
	printf("\n\nIngrese un numero: ");
	scanf("%d",&numero_ingresado);
	
	
	
	
	if(numero_ingresado>=1000 or numero_ingresado<=9999)
	{
		a=  numero_aleatorio % 10;
		numero_aleatorio = (numero_aleatorio - a) / 10;
		b= numero_aleatorio % 10;
		numero_aleatorio = (numero_aleatorio - b) / 10;
		c= numero_aleatorio % 10;
		numero_aleatorio = (numero_aleatorio - c) / 10;
		numero_aleatorio= numero_aleatorio;
		
		printf("%d   %d   %d   %d   \n", a, b, c, d);
		
		
	}
	else
	{
		printf("El numero debe tener 4 cifras. Vuelva a intentarlo");
	}
	if(numero_ingresado==numero_aleatorio)
	{
		printf("Felicitaciones! Acertaste el numero. Puntaje obtenido: %d",puntaje);
	}


	puntaje=puntaje+1;
}

void warcoin()
{
		int i, v[20], min, max, monedas;
	
	printf("ingrese la cantidad minima de monedas que se pueden retirar: ");
	scanf("%d", &min);
	
	printf("ingrese la cantidad maxima de monedas que se puede retirar: ");
	scanf("%d", &max);
	
	srand(time(NULL));
	for(i=0; i<=50; i++)
	{
    
    v[i]=10+rand()%(50)+1-10;
   
	printf("%d ", v[i]);
 
    }  
     
    printf("\nla cantidad de monedas a retirar es: %d", monedas);
	
}















































































