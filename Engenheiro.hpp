#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
    Engenheiro(std::string nome, int projetos, double _salarioHora);
    std::string getNome();
    int getProjetos();
  private:
    std::string _nome;  
    int _projetos;

};
#endif
