#include"Hora.h"

Hora::Hora(int h, int m, int s) {
	horas = h;
	minutos = m;
	segundos = s;
}

Hora::~Hora() {
}
void Hora::setHoras(int h) { horas = h; }
void Hora::setMinutos(int m) { minutos = m; }
void Hora::setSegundos(int s) { segundos = s; }

int Hora::getHoras() { return horas; }
int Hora::getMinutos() { return minutos; }
int Hora::getSegundos() { return segundos; }

string Hora::toString() {
	stringstream s;
	s << "Hora = " << horas << ":" << minutos << ":" << segundos << endl;
	return s.str();
}
