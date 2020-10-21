#include <string>
#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string nome, int projetos, double _salarioHora){
  _nome = nome;
  _projetos = projetos;
  salarioHora = _salarioHora;
};
int Engenheiro::getProjetos(){
  return _projetos; 
}
