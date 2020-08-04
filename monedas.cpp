#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
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
     
    printf("la cantidad de monedas a retirar es: %d", monedas);
    
   
}



