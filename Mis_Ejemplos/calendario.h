/*******************************
* NOMBRE: #Carlos#
* PRIMER APELLIDO: #Sánchez#
* SEGUNDO APELLIDO: #Muñoz#
* DNI: #45303966#
* EMAIL: #csanchezm82@gmail.com#
********************************/
#pragma once
#include "gestion.h"

const int longitudFila = 27;

typedef enum TipoDiaSemana {LU, MA, MI, JU, VI, SA, DO };
typedef enum TipoNombreMes {
  ENERO, FEBRERO, MARZO, ABRIL,
  MAYO, JUNIO, JULIO, AGOSTO,
  SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE
};

typedef char TipoFila_str[longitudFila+1];
typedef char TipoSimbolo_str[2];
typedef struct TipoMesAnno {
  int mes;
  int anno;
};

typedef struct TipoNombreMes_str {
  char nombre[12];
};

typedef struct TipoNumSemanasDelMes {
  int semanas;
  int resto;
};
typedef struct TipoCalendario {

  bool EsCorrecta( int dia, int mes, int anno );

  bool EsBisiesto( int anno);

  void PedirFecha(TipoMesAnno & fecha);

  void ImprimirCalendario ( int unidad, int mes, int anno, TipoVectorVenta vectorVenta );
private:

  int DiasDelMes( TipoNombreMes mes, int anno );

  TipoDiaSemana DiaSemana( int mes, int anno );

  TipoNumSemanasDelMes CalcularNumSemanas( int dias, int primero );

  TipoNombreMes_str NombreDelMes( TipoNombreMes mes );

  void ImprimirLineaSimbolos (int longitud, TipoSimbolo_str simbolo);

  void ImprimirSeparador (int & columna, int & fila, int semanas);

};
