#include <string>
#include "Vendedor.hpp"

Vendedor::Vendedor(std::string nome, double quotaMensalVendas, double _salarioHora) {
  _nome = nome;
  _quotaMensalVendas = quotaMensalVendas;
  salarioHora = _salarioHora;
}

double Vendedor::quotaTotalAnual() {
  return quotaMensalVendas * 12;
}
