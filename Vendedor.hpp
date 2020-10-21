#ifndef VENDEDOR_H
#define VENDEDOR_H
#include "Empregado.hpp"

class Vendedor : public Empregado {

  private:
    double _quotaMensalVendas;
  public:
    Vendedor(std::string nome, double quotaMensalVendas,  double _salarioHora);
    double quotaTotalAnual();
};
#endif
