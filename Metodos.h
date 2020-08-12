int menu();
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

void separar(int n, int &d1, int &d2, int &d3, int &d4);
void separar(int n, int &d1, int &d2, int &d3, int &d4)
{
	d4 = n % 10;
	n = n / 10;	
	d3 = n % 10;
	n = n / 10;
	d2 = n % 10;
	d1 = n / 10;
}
