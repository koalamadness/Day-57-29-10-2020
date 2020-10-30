#include <iostream>
#include "arreglo.h"

int main() {
  Arreglo arreglo;
  arreglo.insertar_final("Pato");
  arreglo.insertar_final("Ganso");
  arreglo.insertar_final("Perro");
  arreglo.insertar_final("Vaca");
  arreglo.insertar_final("Gallo");
  arreglo.insertar_final("Iguana");
  arreglo.insertar_final("Zorro");
  arreglo.insertar_final("Lobo");

  for (size_t i = 0; i < arreglo.size(); i++)
  {
    cout << arreglo[i] << " ";
  }

  cout << endl;
  
  arreglo.insertar_inicio("Gallina");
  arreglo.insertar_inicio("Toro");

  for (size_t i = 0; i < arreglo.size(); i++)
  {
    cout << arreglo[i] << " ";
  }

}