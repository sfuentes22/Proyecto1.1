#include "Chofer.h"

Chofer::Chofer(){}     // Constr. por defecto
Chofer::Chofer(string nom, string ced) {
	nombre = nom;
	cedula = ced;
}  // constructor Parametrizado.
Chofer::~Chofer(){}

void Chofer::setNombre(string nom) { nombre = nom; }
void Chofer::setCedula(string ced) { cedula = ced; }
string Chofer::getNombre() { return nombre; }
string Chofer::getCedula() { return cedula; }

string Chofer::toString() {
	stringstream s;
	s << "Nombre: " << nombre << endl;
	s << "Cedula: " << cedula << endl;
	return s.str();
}
