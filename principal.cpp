#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
enum TRaza{Orco, Humano, Mago, Enano, Elfo};
char Nombres[6][10];
char Apellidos[6][10];
struct TDatos {
	TRaza Raza;
	char *ApellidoNombre;
	int edad; 
	double Salud;
};
typedef struct TDatos TD;
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

void CargarCaracteristicas(TCaracteristicas *puntero);
void MostrarCaracteristicas(TCaracteristicas *puntero);


void main(){	
	TCaracteristicas *ptr = (TCaracteristicas *) malloc(sizeof(TCaracteristicas));
	CargarCaracteristicas(ptr);
	MostrarCaracteristicas(ptr);



};

void CargarCaracteristicas(TCaracteristicas *puntero){
	printf("Caracteristicas del personaje: \n");
	printf("velocidad: \n");
	scanf("%d",&puntero -> velocidad);
	printf("destreza: \n");
	scanf("%d",&puntero -> destreza);
	printf("fuerza: \n");
	scanf("%d",&puntero -> fuerza);
	printf("Nivel: \n");
	scanf("%d",&puntero -> Nivel);
	printf("Armadura: \n");
	scanf("%d",&puntero -> Armadura);

}

void MostrarCaracteristicas(TCaracteristicas *puntero){
	printf("Introducir Caracteristicas del personaje: \n");
	printf("velocidad: %d\n", puntero->velocidad);
	printf("destreza: %d\n", puntero->destreza);
	printf("fuerza: %d\n", puntero->fuerza);
	printf("Nivel: %d\n", puntero->Nivel);
	printf("Armadura: %d\n", puntero->Armadura);
}