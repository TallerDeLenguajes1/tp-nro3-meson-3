#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>


enum TRaza{Orco = 1, Humano = 2, Mago = 3, Enano = 4, Elfo = 5};
char Nombres[6][10]={"Ale", "Lola", "Pepito", "Tere", "TT"};
char Apellidos[6][10]={" Denis", " Gon", " NN", " KKK", " e"};

struct TDatos {

	enum TRaza Raza;
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

struct TPersonaje {
	TDatos * DatosPersonales;
	TCaracteristicas * Caracteristicas;
};

void cargar_datos(struct TDatos *Datos);
void mostrar_datos(struct TDatos *Datos);

int main()
{
	struct TDatos *DatosP;//DatosP: datos de personajes
	int i;
	i = 0;

	while(i <3){

		cargar_datos(DatosP);
		mostrar_datos(DatosP);
		i++;
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