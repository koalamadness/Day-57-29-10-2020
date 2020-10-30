#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>
#include <string>
using namespace std;

class Arreglo
{
  string *arreglo;
  size_t tam;
  size_t cont;
  const static size_t MAX = 5;
  
public:
  Arreglo();
  ~Arreglo();
  void insertar_final(const string &s);
  void insertar_inicio(const string &s);
  size_t size();
  string operator[] (size_t p)
  {
    return arreglo[p];
  }
private:
  void expandir();
};

#endif 