/*Programa: FechaDeNacimiento*/

#include <conio.h>
#include <stdio.h>

int main(){

   int main1 = 2024;
   int main2 = 20001;
   int resultado = 2024 - 2001;

    char nombre[20]; int fecha, de, nacimiento [10];

    printf ("introduzca su nombre:");
    scanf ("%s", nombre);
    printf ("Fecha de nacimiento:");
    scanf ("%i", fecha, de, nacimiento);

    printf ("HOLA %s, TU EDAD ES:", nombre);
    printf ("%d", resultado);

    getch(); //pausa//

    return 0;
}
