#include "Empregado.hpp"
#define DIARIA 8 //jornada diaria em horas

double Empregado::pagamentoMes(double horasTrabalhadas) {
  double t = horasTrabalhadas;
	//Cálculo de hora extra (+50% se horasTrabalhadas > 8)
  if (horasTrabalhadas > DIARIA) {
    double x = horasTrabalhadas - DIARIA;
    t += x / 2;
  }
	return t * salarioHora;
}
	
