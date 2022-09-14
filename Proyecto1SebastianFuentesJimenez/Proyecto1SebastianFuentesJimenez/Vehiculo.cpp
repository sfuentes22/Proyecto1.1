#include "Vehiculo.h"

Vehiculo::Vehiculo(string mar, int pla, float ton, string col, Chofer* chPtr) {
	marca = mar;
	placa = pla;
	tonelaje = ton;
	color = col;
	chof = chPtr;
}
Vehiculo:: ~Vehiculo(){
	if (chof != NULL)  delete chof;
}

string Vehiculo::getMarca() { return marca; }
int Vehiculo::getPlaca() { return placa; }
float Vehiculo::getTonelaje() { return tonelaje; }
string Vehiculo::getColor() { return color; }
Chofer* Vehiculo::getChofer() { return chof; }

void Vehiculo::setMarca(string mar) { marca = mar; }
void Vehiculo::setPlaca(int pla) { placa = pla; }
void Vehiculo::setTonelaje(float ton) { tonelaje = ton; }
void Vehiculo::setColor(string col) { color = col; }
void Vehiculo::setChofer(Chofer* chPtr){ chof = chPtr; }

string Vehiculo::toString(){
	stringstream s;
	s << "---Vehiculo---" << endl;
	s << "Marca: " << marca << endl;
	s << "Placa: " << placa << endl;
	s << "Tonelaje: " << tonelaje << endl;
	s << "Color: " << color << endl;
	s << "Chofer: " << endl << chof << endl;
	return s.str();
}