#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
    Engenheiro(std::string nome, int projetos, double _salarioHora);
    int getProjetos();
  private:
    int _projetos;
  
};
#endif
