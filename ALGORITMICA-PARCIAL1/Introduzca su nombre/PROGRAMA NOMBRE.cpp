/* Programa: Nombre */

#include <conio.h>
#include <stdio.h>

int main()
{

    char nombre[20], apellido[20];

    printf( "Introduzca su nombre: " );
    scanf( "%s", nombre );
    printf("Introduce su apellido");
    scanf("%s", apellido);
    printf( "hola %s %s buenos dias.", nombre, apellido) ;

    getch (); /*pausa*/

    return 0;
}



