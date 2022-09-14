#include "Cobro.h"

Cobro::Cobro(Vehiculo* vePtr, Hora* entPtr, Hora* salPtr  , double tot) {
	vehiculo = vePtr;
	entrada = entPtr;
	salida = salPtr;
	total = tot;
}
Cobro:: ~Cobro(){
	if (vehiculo != NULL) delete vehiculo;
	if (entrada != NULL)  delete entrada;
	if (salida != NULL)  delete salida;
}
Vehiculo* Cobro::getVehiculo() { return vehiculo; }
Hora* Cobro::getHoraEnt() { return entrada; }
Hora* Cobro::getHoraSal() { return salida; }
double Cobro::getTotal() { return total; }

void Cobro::setVehiculo(Vehiculo* vePtr) { vehiculo = vePtr; }
void Cobro::setHoraEnt(Hora* entPtr){ entrada = entPtr; }
void Cobro::setHoraSal(Hora* salPtr){ salida = salPtr; }
void Cobro::setTotal(double tot){ total = tot; }

double Cobro::calculoMonto(Vehiculo* vePtr, Hora* entPtr, Hora* salPtr) {
	double total = 0;
	double impuesto = 0;
	if (vePtr->getTonelaje() < 1.0) {
		total = (salPtr->getHoras() - entPtr->getHoras()) * 800;
		return total;
	}
	else if (vePtr->getTonelaje() >= 1.0 && vePtr->getTonelaje() <1.5) {
		impuesto = 0.05;
		total = ((salPtr->getHoras() - entPtr->getHoras()) * 800)+ ((salPtr->getHoras() - entPtr->getHoras()) * 800) * impuesto;
		return total;
	}
	else if (vePtr->getTonelaje() >= 1.6 && vePtr->getTonelaje() < 3.5) {
		impuesto = 0.1;
		total = ((salPtr->getHoras() - entPtr->getHoras()) * 800) + ((salPtr->getHoras() - entPtr->getHoras()) * 800) * impuesto;
		return total;
	}
	else if (vePtr->getTonelaje() >= 3.6 && vePtr->getTonelaje() < 5.0) {
		impuesto = 0.15;
		total = ((salPtr->getHoras() - entPtr->getHoras()) * 800) + ((salPtr->getHoras() - entPtr->getHoras()) * 800) * impuesto;
		return total;
	}
	else if (vePtr->getTonelaje() > 5.0) {
		impuesto = 0.2;
		total = ((salPtr->getHoras() - entPtr->getHoras()) * 800) + ((salPtr->getHoras() - entPtr->getHoras()) * 800) * impuesto;
		return total;
	}
	else {
		return -1;
	}
}

string Cobro::toString(){
	stringstream s;
	s << "Vehiculo: " << endl << vehiculo << endl;
	s << "Hora de entrada: " << entrada;
	s << ". Hora de salida: " << salida << endl;
	s << "Total de horas: " << salida->getHoras() - entrada->getHoras() << endl;
	//s << "Cobro: " << calculoMonto << " colones. " << endl;
	return s.str();
}
