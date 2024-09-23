/* Programa: Nombre */

#include <conio.h>
#include <stdio.h>
#include <cstdio>

int main()
{

    char nombre[20], apellido[20];

    printf( "Introduzca su nombre: " );
    scanf( "%s", nombre );
    printf("Introduzca su apellido: ");
    scanf("%s", apellido );
    printf( "HOLA %s %s, BUENOS DIAS.", nombre) ;

    getch (); /* pausa */

    return 0;
}



