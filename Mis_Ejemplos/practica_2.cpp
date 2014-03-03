/*******************************
* NOMBRE: #Carlos#
* PRIMER APELLIDO: #Sánchez#
* SEGUNDO APELLIDO: #Muñoz#
* DNI: #45303966#
* EMAIL: #csanchezm82@gmail.com#
********************************/
#include <stdio.h>

int main() {

  int lado; /* lado del rombo */

  /* Leer el lado del rombo deseado */

  printf( "¿Lado del rombo?" );

  scanf( "%d", &lado );

  /* saltar una línea */

  printf( "\n" );

  /* Condicional para que el programa no se ejecute si el lado es menor a 0 o mayor de 20 */

  if ( lado > 0 && lado <= 20) {

    /* Una iteración por cada línea del rombo en la parte superior */

    for ( int linea = 1; linea <= lado; linea++) {

      /* Paso 1º: Espacios en blanco a la izquierda del rombo */

      for ( int posicion = 1; posicion <= lado - linea; posicion++ ) {

        printf( " " );

      }

      /* Paso 2º: Escribir caracteres en cada línea hasta la mitad del rombo */

      for ( int posicion = 1; posicion <= linea; posicion++ ) {

        if ( posicion % 4 == 1) {

          printf( "@" );

        } else if ( posicion % 4 == 2) {

          printf( "." );

        } else if ( posicion % 4 == 3) {

          printf( "o" );

        } else {

          printf( "." );

        }

      }

      /* Paso 3º: Escribir caracteres en cada línea desde la mitad del rombo hasta el final */

      for ( int posicion = linea - 1; posicion >= 1; posicion-- ) {

        if ( posicion % 4 == 1) {

          printf( "@" );

        } else if ( posicion % 4 == 2) {

          printf( "." );

        } else if ( posicion % 4 == 3) {

          printf( "o" );

        } else {

          printf( "." );

        }

      }

      /* Pasar a la línea de abajo */

      printf( "\n" );

    }

    /* Una iteración por cada línea del rombo en la parte inferior */

    for ( int linea = lado + 1; linea <= (lado * 2) - 1; linea++ ) {

      /* Paso 1º: Espacios en blanco a la izquierda del rombo */

      for ( int posicion = 1; posicion <= linea - lado; posicion++ ) {

        printf( " " );

      }

      /* Paso 2º: Escribir caracteres en cada línea hasta la mitad del rombo */

      for (int posicion = 1; posicion <= lado - (linea - lado); posicion++ ) {

        if ( posicion % 4 == 1) {

          printf( "@" );

        } else if ( posicion % 4 == 2) {

          printf( "." );

        } else if ( posicion % 4 == 3) {

          printf( "o" );

        } else {

          printf( "." );

        }

      }

      /* Paso 3º: Escribir caracteres en cada línea desde la mitad del rombo hasta el final */

      for ( int posicion = lado - (linea - lado + 1); posicion >= 1 ; posicion--) {

        if ( posicion % 4 == 1) {

          printf( "@" );

        } else if ( posicion % 4 == 2) {

          printf( "." );

        } else if ( posicion % 4 == 3) {

          printf( "o" );

        } else {

          printf( "." );

        }

      }

      /* Pasar a la línea de abajo */

      printf( "\n" );

    }

  }

}
