#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
enum TRaza{Orco, Humano, Mago, Enano, Elfo};
char Nombres[6][10];
char Apellidos[6][10];
struct TDatos {
TRaza Raza;
Char *ApellidoNombre;
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

void main()
{}