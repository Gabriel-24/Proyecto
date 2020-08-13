#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "Metodos.h"

void MayMen();
void Adivinium();
void WarCoin();
void Ahorcado();

main()
{
	int opcion_final;
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
			WarCoin();
			break;	
		case 4:
			Ahorcado();
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
	system("cls");
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
	system("cls");
	int puntaje=11,numero_aleatorio=0,numero_ingresado;
	int contador=9,intentos=0,intento_falso=1,correctos=0,malaposicion=0;
	int primero, segundo, tercero, cuarto;
	int x1,x2,x3,x4;
	
	printf("\n --Es un juego en el que se tiene que adivinar un numero de 4 cifras entre 1000 y 9999--");
	printf("\n1.Intentos para encontrar el numero: 10");
	printf("\n2.El puntaje obtenido depende de la cantidad de intentos");
	printf("\n4.Si el jugador adivina el numero gana la partida");
	printf("\n5.Se te indicara las posiciones que ocupan los numeros ingresados (misma posicion o otra posicion)(1 vez como maximo)");
	printf("\n6.Jugaremos con numeros de 4 cifras");
	srand(time(NULL));
	numero_aleatorio=1000 + rand()%8999;;
	separar(numero_aleatorio,primero,segundo,tercero,cuarto);
	printf("Numero: %d",numero_aleatorio);
	do
	{	
	printf("\n\nIngrese un numero: ");
	scanf("%d",&numero_ingresado);
	separar(numero_ingresado,x1,x2,x3,x4);
	
	if(x1==primero) correctos++;
	if(x2==segundo) correctos++;
	if(x3==tercero) correctos++;
	if(x4==cuarto) correctos++;
	if(x1==segundo or x1==tercero or x1==cuarto) malaposicion++;
	if(x2==primero or x2==tercero or x2==cuarto) malaposicion++;
	if(x3==primero or x3==segundo or x3==cuarto) malaposicion++;
	if(x4==primero or x4==segundo or x4==tercero) malaposicion++;
	
	if(numero_ingresado<1000 or numero_ingresado>9999)
	{
		printf("\nIntentos: %d", intento_falso);
		printf("\nEl numero debe tener 4 cifras. Vuelva a intentarlo");
	}
	else
	{
		printf("\nIntentos: %d", intento_falso);
		printf("\nCant. Misma Posicion: %d - Cant. Otra Posicion: %d",correctos,malaposicion);
	}	
	
	contador=contador-1;
	intento_falso=intento_falso+1;
	puntaje=puntaje-1;
	}while(contador<11 and contador>=0 and numero_ingresado!=numero_aleatorio);
	
	
	if(numero_ingresado==numero_aleatorio)
	{
		printf("\n\nFelicitaciones! Acertaste el numero. Puntaje obtenido: %d",puntaje);
	}
	else
	{
		printf("\n\nNo adivino el numero aleatorio, El numero aleatorio era: %d. Puntaje obtenido: 0",numero_aleatorio);
	}
		
}


void WarCoin()
{
	int opcion=0;
	srand(time(NULL));
	do{
	system("cls");
	system ("color 30");
	warcoin();	
	printf("\n1.- Comenzar Juego\n");
    printf("2.- Reglas\n");
    printf("3.- Salir \n");
    printf("\nIngrese una opcion: ");
    scanf("%d", &opcion);
    if(opcion==1){
    	juego();	
	    system("pause");
		}
    if(opcion==2){
		Reglas();
	    system("pause");		
		}
	if(opcion==3){
		system("cls");
		printf("\n\nAdios, buen Juego!!\n\n");
	}
    }while( opcion != 3); 
      system("PAUSE");
}

void Ahorcado()
{
	
}














































































