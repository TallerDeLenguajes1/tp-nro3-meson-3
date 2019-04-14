#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 10

enum TRaza{Orco = 1, Humano = 2, Mago = 3, Enano = 4, Elfo = 5};
char Nombres[6][10]={"Ale", "Lola", "Pepito", "Tere", "TT"};
char Apellidos[6][10]={" Denis", " Gon", " NN", " KKK", " e"};

struct TDatos {
	TRaza Raza;
	char *ApellidoNombre;
	int edad; 
	double Salud;
};

struct TCaracteristicas{
	int velocidad;
	int destreza; 
	int fuerza;
	int Nivel; 
	int Armadura; 
};
typedef struct TCarcteristicas TC;
struct TPersonaje {
	TDatos * DatosPersonales;
	TCaracteristicas * Caracteristicas;
};
typedef struct TPersonaje TP;

void cargar_datos(struct TDatos *Datos);
void mostrar_datos(struct TDatos *Datos);
void CargarCaracteristicas(TCaracteristicas *puntero);
void MostrarCaracteristicas(TCaracteristicas *puntero);

int main()
{
	TPersonaje arregloP[MAX];
	int N,i, num; // cantidad de jugadores

	printf("Ingrese cantidad de Personajes:\n");
	scanf("%d", &N);
	
	//*N_Personaje = (TPersonaje *) malloc (sizeof(TPersonaje) * cantidad);
	arregloP -> Caracteristicas = (TCaracteristicas *) malloc(sizeof(TCaracteristicas) * N);
	arregloP -> DatosPersonales = (TDatos *) malloc(sizeof(TDatos) * N);

	for (int i = 0; i < N; ++i)
	{
		CargarCaracteristicas(arregloP[i].Caracteristicas);
		cargar_datos(arregloP[i].DatosPersonales);
		//printf("%d Personaje: \n", i+1, arregloP[i].ApellidoNombre );
	}

	for (int i = 0; i < 2; ++i)
	{
		//Elijo el personajeTPersonaje arregloP[3];
		printf("Ver Personaje Nro: \n");
		scanf("%d", &num);

		//Muestra el personaje seleccionado
		MostrarCaracteristicas(arregloP[num].Caracteristicas);
		mostrar_datos(arregloP[num].DatosPersonales);
		
	}	

	
	
	return 0;	
}

void cargar_datos(struct TDatos *Datos){

	Datos -> Raza = rand() % (5-1) + 1;
	strcpy(Datos -> ApellidoNombre, Nombres[0 + rand() % (5-0)]);
	strcat(Datos -> ApellidoNombre, Apellidos[rand() % (5-0) + 0]);	
	Datos -> edad = rand() % (300 - 0) + 0;
	Datos -> Salud = 100;

}

void mostrar_datos(struct TDatos *Datos){
	printf("* * * DATOS DEL PERSONAJE * * *\n");
	switch((*Datos).Raza){
		case 1: printf("Raza: Orco\n");
		break;
		case 2: printf("Raza: Humano\n");
		break;
		case 3: printf("Raza: Mago\n");
		break;
		case 4: printf("Raza: Enano\n");
		break;
		case 5: printf("Raza: Elfo\n");
		break;
		default: printf("...\n");
	}
	printf("Nombre: %s\n", Datos -> ApellidoNombre);
	printf("Edad: %d\n", Datos -> edad);
	printf("Salud: %.2f\n", Datos -> Salud);
}
void CargarCaracteristicas(TCaracteristicas *puntero){
	puntero -> velocidad = 1+ rand()%(10);
	puntero -> destreza = 1+ rand()%(5);
	puntero -> fuerza = 1+ rand()%(10);
	puntero -> Nivel = 1+ rand()%(10);
	puntero -> Armadura = 1+ rand()%(10);

}

void MostrarCaracteristicas(TCaracteristicas *puntero){
	printf("* * * Caracteristicas del personaje * * * \n");
	printf("velocidad: %d\n", puntero->velocidad);
	printf("destreza: %d\n", puntero->destreza);
	printf("fuerza: %d\n", puntero->fuerza);
	printf("Nivel: %d\n", puntero->Nivel);
	printf("Armadura: %d\n", puntero->Armadura);
}
