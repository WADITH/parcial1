
/* Nombre: Parcial 1 Punto 1.
	Autor: Wadith Enrique Montenegro- Juan Carlos Bermudez
	Fecha: Agosto 30 de 2017 */


#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>


using namespace std;


struct proveedor{
	char nombre [20];
	char telefono [10];
	char direccion[20];
	
}p1; 

struct productos{
	
	int cantidad;
	int precio;

}pdtos;


int main () {
	
int importe;

fflush (stdin);	
printf ("Digite su nombre: \n");
cin.getline(p1.nombre,20,'\n');
printf (" Digite su Telefono: \n");
cin.getline(p1.telefono,10,'\n');
printf ( "Digite su Direccion: \n" );
cin.getline(p1.direccion,20,'\n');
printf ("Cantidad Vendida: \n");
cin >> pdtos.cantidad;
printf ("Precio del Articulo: \n");
cin >> pdtos.precio;


importe = pdtos.cantidad*pdtos.precio;



printf ("\n\n INFORMACION DEL COMPRADOR: \n"); 

cout << "\nNombre: " << p1.nombre << endl;
cout << "Telefono: " << p1.telefono << endl;
cout << "Direccion: " << p1.direccion << endl;
cout << "Cantidad de artiulos " << pdtos.cantidad << endl;
cout << "Precio Articulo: " << pdtos.precio << endl; 
cout << "Valor de la compra: " << importe;
	
	getch ();
	return 0;
}
