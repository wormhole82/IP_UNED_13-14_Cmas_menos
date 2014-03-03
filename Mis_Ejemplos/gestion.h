/*******************************
* NOMBRE: #Carlos#
* PRIMER APELLIDO: #Sánchez#
* SEGUNDO APELLIDO: #Muñoz#
* DNI: #45303966#
* EMAIL: #csanchezm82@gmail.com#
********************************/
#pragma once

const int maxVenta = 100;
const int longMaxNombre = 50;
extern int numVenta;
typedef char TipoNombre[longMaxNombre + 1];
typedef enum Tipounidad {unidad0, unidad1, unidad2, unidad3};
typedef struct TipoFecha {
  int dia;
  int mes;
  int anno;
};
typedef struct TipoVenta {
  TipoNombre nombre;
  Tipounidad unidad;
  TipoFecha fecha;
};
typedef TipoVenta TipoVectorVenta[maxVenta];
typedef struct TipoGestion {

  void ListarVenta (TipoVectorVenta vectorVenta);

  void IntroducirVenta (TipoVectorVenta vectorVenta);

  void EliminarVenta (TipoVectorVenta vectorVenta);

  void InicializarVectorVenta (TipoVectorVenta vectorVenta);
private:

  bool VentaCompletas();

  void InicializarVenta (TipoVenta &Venta);

  void OrdenarVectorVenta (TipoVectorVenta vectorVenta);
};
