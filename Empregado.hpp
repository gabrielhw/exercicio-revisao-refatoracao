#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  protected:
    double salarioHora;  
    double quotaMensalVendas;
    std::string _nome;
  public:
    double pagamentoMes(double horasTrabalhadas);
    std::string getNome();
};

#endif
