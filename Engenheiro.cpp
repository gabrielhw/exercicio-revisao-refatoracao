#include <string>
#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std:string nome, int projetos, double _salarioHora){
  _nome = nome;
  _projetos = projetos;
  salarioHora = _salarioHora
}
std::string Engenheiro::getNome(){
  return _nome; 
}
int Engenheiro::getProjetos(){
  return _projetos; 
}

