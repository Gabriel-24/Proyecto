int menu();
void sistema();
void juego();
void separar(int n, int &d1, int &d2, int &d3, int &d4);
void warcoin();
void Reglas();
int comprobar_monedas_usuario(int cant_max, int cant_min,int monedas);
void equivocacion(int errores);



int menu()
{	
	int opcion;
	printf("\n ---Menu: Juegos---  ");
	printf("\n\n 1.Elegir (JUEGO MAYOR MENOR)");
	printf("\n\n 2.Elegir (ADIVINUM)");
	printf("\n\n 3.Elegir (WARCOIN - GUERRA DE MONEDAS )");
	printf("\n\n 4.Elegir (AHORCADO )");
	printf("\n\n 5. Salir");
	printf("\n\n Opcion:  ");
	scanf("%d",&opcion);
	return opcion;
}

void separar(int n, int &d1, int &d2, int &d3, int &d4)
{
	d4 = n % 10;
	n = n / 10;	
	d3 = n % 10;
	n = n / 10;
	d2 = n % 10;
	d1 = n / 10;
}

void juego()
{
	
	int cant_min,cant_max,puntaje=5,cant_inicial,turno=0,monedas=0;
	
	int monedas_comp=0;
	srand(time(NULL));
	turno=1 + rand() % 2;
	
	cant_inicial = 10 + rand()% 40 ;
	
	printf("\nIngresa la cantidad minima de monedas que se pueden retirar:");
	scanf("%d",&cant_min);
	printf("Ingresa la cantidad maxima de monedas que se pueden retirar:");
	scanf("%d",&cant_max);
	
	while(cant_min<0){
			printf("\nIngresa la cantidad minima de monedas que se pueden retirar: ");
			scanf("%d",&cant_min);
		}
	
	while(cant_max < cant_min){
		
		printf("\nIngresa la cantidad maxima de monedas que se pueden retirar:");
		scanf("%d",&cant_max);
		
	}
	
	printf("\nLa cantidad inicial de monedas en la pila es: %d",cant_inicial);
     

	if(turno == 2){
		
		printf("\nInicia la partida el usuario");

	        do{
	        	if(cant_inicial >= cant_min )
	        	{	
	        		
	        		
	      	 		 printf("\nIngrese la cantidad de monedas a sacar: ");
          			 scanf("%d",&monedas);
            		 
	        		 monedas=comprobar_monedas_usuario(cant_max,cant_min,monedas);
			  		                       
	            	while(monedas>cant_inicial){
	            		
	            	 printf("\nmonedas insuficientes, por favor ingrese un valor mas chico\n");	
	            		
	            	 printf("\nIngrese la cantidad de monedas a sacar: ");
          			 scanf("%d",&monedas);
            		 
	        		 monedas=comprobar_monedas_usuario(cant_max,cant_min,monedas);
	            	}
	            	cant_inicial=cant_inicial-monedas;      
	            printf("\nLas monedas que quedan son : %d",cant_inicial);
	            
	            if(cant_inicial<cant_min){
					printf("\n\nFELICIDADES USTED GANO!! %d \n\n",puntaje);
					break;
					}
				monedas_comp=cant_min + rand() % (cant_max-cant_min);
					
				while(monedas_comp>cant_inicial){
	            	     monedas_comp=cant_min + rand() % (cant_max-cant_min);
	            	}
	            
				printf("\nLa computadora saco %d monedas de la pila ",monedas_comp);
	                                                 
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
		
		printf("\nInicia la partida la computadora");
        
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
							printf("\n\nLA COMPUTADORA GANO!!! Puntaje obtenido:%d \n\n",puntaje-5);
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
							printf("\n\nFELIZCIDADES USTED GANO!! Puntaje obtenido:%d \n\n",puntaje);
							break;
						}
		
				}
	}while(monedas!=0 && monedas>=cant_min);  	
}
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
	printf("\n El juego pondra la pila de monedas a sacar aleatoriamente a su vez elige el turno , se juega de a dos.");
	printf("\n El usuario y la computadora deberan ir sacando monedas de la pila, hasta que la pila se quede sin monedas");
	printf("\n o con monedas menor a la cantidad minima, el primero en dejar la pila sin monedas GANA ");
	printf("\n Para calcular el puntaje si el usuario llega primero gana un total de 5 puntos, de lo contrario gana la computadora ");
    printf("\n Puntaje inical: 0");
    printf("\n\n");
	system("pause");
}

int comprobar_monedas_usuario(int cant_max, int cant_min,int monedas)
{
	
	 while( (monedas < cant_min) || (monedas > cant_max)){
	                                         	
	  	printf("\nUsuario ingrese la cantidad de monedas a sacar dentro del intervalo: ");
	    scanf("%d",&monedas);	
		}
	 return monedas;                                      
}

void sistema()
{
	system ("color 30");
	system("cls");
}

void equivocacion(int errores)
{
	 switch(errores)
	{	
		case 0:
			printf("\n |--------");
			printf("\n |        |");
			printf("\n |         ");
			printf("\n |         ");
			printf("\n __        ");
			printf("\n[__]       ");
			
			break;
	   case 1: 
			printf("\n |--------");
			printf("\n |        |");
			printf("\n |        O");
			printf("\n |         ");
			printf("\n __        ");
			printf("\n[__]       ");
	   	break;
	   case 2: 
			printf("\n |--------");
			printf("\n |        |");
			printf("\n |       \\O");
			printf("\n |         ");
			printf("\n __        ");
			printf("\n[__]       ");
	   	break; 
	   case 3: 
			printf("\n |--------  ");
			printf("\n |        |  ");
			printf("\n |       \\O/  ");
			printf("\n |          ");
			printf("\n __         ");
			printf("\n[__]        ");
	   	break;
	   case 4: 
			printf("\n |--------");
			printf("\n |        |");
			printf("\n |       \\O/");
			printf("\n |        |");
			printf("\n __         ");
			printf("\n[__]        ");
	   	break;
	   case 5: 
			printf("\n |--------");
			printf("\n |        |");
			printf("\n |       \\O/");
			printf("\n |        |");
			printf("\n __       /");
			printf("\n[__]       ");
	   	break;
		case 6: 
			printf("\n |--------");
			printf("\n |        |");
			printf("\n |       \\O/");
			printf("\n |        |");
			printf("\n __       /\\");
			printf("\n[__]       ");   
	   case 7: 
			printf("\nGAME OVER. Puntaje Obtenido: 0");
	   	break;  
   }
	
}



















































































