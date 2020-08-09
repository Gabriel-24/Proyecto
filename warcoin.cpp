#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void juego();
void warcoin();
void Reglas();
int comprobar_monedas_usuario(int cant_max, int cant_min,int monedas);

main(){
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

void warcoin()
{
	
	printf("                  WARCOIN                    \n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void Reglas()
{   
    system("cls");
    warcoin();
	printf("\n\n Warcoin es un juego de monedas. Se debe ingresar una cantidad minima y maxima   para comenzar el juego .");
	printf("\n El juego pondra la pila de monedas a sacar aleatoriamente a su vez elige el tur_no , se juega de a dos.");
	printf("\n El usuario y la computadora deberan ir sacando monedas de la pila, hasta que la pila se quede sin monedas");
	printf("\n o con monedas menor a la cantidad minima, el primero en dejar la pila sin mone_das GANA ");
    printf("\n\n\t Puntaje: ");
    printf("\n Para calcular el puntaje si el usuario llega primero gana un total de 5 puntos, de lo contrario gana la computadora ");
    printf("\n\n");
	system("pause");
}

void juego(){
	
	int cant_min,cant_max,puntaje=5,cant_inicial,turno=0,monedas=0;
	
	int monedas_comp=0;
	srand(time(NULL));
	turno=1 + rand() % 2;
	
	cant_inicial = 10 + rand()% 40 ;
	
	printf("\nIngrese la cantidad minima: ");
	scanf("%d",&cant_min);
	printf("\nIngrese la cantidad maxima: ");
	scanf("%d",&cant_max);
	
	while(cant_min<0){
			printf("\nIngrese la cantidad minima: ");
			scanf("%d",&cant_min);
		}
	
	while(cant_max < cant_min){
		
		printf("\nIngrese la cantidad maxima: ");
		scanf("%d",&cant_max);
		
	}
	
	printf("\nLa cantidad inicial de monedas en la pila es: %d",cant_inicial);
     

	if(turno == 2){
		
		printf("\nEmpieza el usuario ");

	        do{
	        	if(cant_inicial >= cant_min )
	        	{	
	        		
	        		
	      	 		 printf("\nIngrese la cantidad de monedas a sacar= ");
          			 scanf("%d",&monedas);
            		 
	        		 monedas=comprobar_monedas_usuario(cant_max,cant_min,monedas);
			  		                       
	            	while(monedas>cant_inicial){
	            		
	            	 printf("\nmonedas insuficientes, por favor ingrese un valor mas chico\n");	
	            		
	            	 printf("\nIngrese la cantidad de monedas a sacar= ");
          			 scanf("%d",&monedas);
            		 
	        		 monedas=comprobar_monedas_usuario(cant_max,cant_min,monedas);
	            	}
	            	cant_inicial=cant_inicial-monedas;      
	            printf("\nLas monedas que quedan son : %d",cant_inicial);
	            
	            if(cant_inicial<cant_min){
					printf("\n\nFELICIDADES USTED GANO!! %d \n\n",puntaje+5);
					break;
					}
				monedas_comp=cant_min + rand() % (cant_max-cant_min);
					
				while(monedas_comp>cant_inicial){
	            	     monedas_comp=cant_min + rand() % (cant_max-cant_min);
	            	}
	            
				printf("\nLa Computadora saca = %d monedas",monedas_comp);
	                                                 
	            if(monedas_comp<=cant_inicial){
	            cant_inicial=cant_inicial-monedas_comp;
	            }
            
    			printf("\nLas monedas que quedan son : %d",cant_inicial);
    			
    			if(cant_inicial<cant_min){
					printf("\n\nPerdiste, gano computadora %d \n\n",puntaje-5);
					break;
				}
    		
             }        
            }while(monedas!=0 && monedas>cant_min);
		
	}else{
		
		printf("\nEmpieza la computadora ");
        
	       do{
	       		if(cant_inicial >= cant_min)
	       		{	
	       			monedas_comp=cant_min + rand() % (cant_max-cant_min);
	                
					while(monedas_comp>cant_inicial){
	            	     monedas_comp=cant_min + rand() % (cant_max-cant_min);
	            		}
				
					printf("\nLa Computadora saca = %d monedas",monedas_comp);
	                
	                if(monedas_comp<=cant_inicial){
	            	cant_inicial=cant_inicial-monedas_comp;
	           		}
	                    
                        printf("\nLas monedas que quedan son : %d",cant_inicial);
						
						if(cant_inicial<cant_min){
							printf("\n\nPerdiste, gano computadora %d \n\n",puntaje-5);
							break;
						}
						
	                    printf("\nUsuario ingrese la cantidad de monedas a sacar: ");
	                    scanf("%d",&monedas);
	                                      
	                    monedas=comprobar_monedas_usuario(cant_max,cant_min,monedas);
	                    
	                    while(monedas>cant_inicial){
	            		
	            		 printf("\nMonedas insuficientes, por favor ingrese un valor mas chico\n");	
	            		
	            		 printf("\nIngrese la cantidad de monedas a sacar: ");
          				 scanf("%d",&monedas);
            		 
	        			 monedas=comprobar_monedas_usuario(cant_max,cant_min,monedas);
	            		}
	                                        
	                    cant_inicial=cant_inicial-monedas;
	                	printf("\nLas monedas que quedan son : %d",cant_inicial);
	            		
	            		if(cant_inicial<cant_min){
							printf("\n\nFELIZCIDADES USTED GANO!!  %d \n\n",puntaje+5);
							break;
						}
		
				}
	}while(monedas!=0 && monedas>=cant_min);  	
}
}

int comprobar_monedas_usuario(int cant_max, int cant_min,int monedas){
	
	 while( (monedas < cant_min) || (monedas > cant_max)){
	                                         	
	  	printf("\nUsuario ingrese la cantidad de monedas a sacar dentro del intervalo: ");
	    scanf("%d",&monedas);	
		}
	 return monedas;                                      
}
