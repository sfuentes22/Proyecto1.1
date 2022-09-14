#include "InfoDelCampo.h"


InfoDelCampo::InfoDelCampo(){
	can = 0;
	tam = 10;
	for (int i = 0; i < tam; i++)  
		vecVe[i] = NULL;

}
InfoDelCampo::~InfoDelCampo(){
	for (int i = 0; i < can; i++)
		delete vecVe[i];
	delete[] vecVe;
}

int InfoDelCampo::getCan() { return can; }
int InfoDelCampo::getMumCampo() { return numCampo; }
char InfoDelCampo::getEstado() { return estado; }

bool InfoDelCampo::ingresarVehiculo(Vehiculo* pun){
	if (can < 10) {
		vecVe[can++] = pun;
		numCampo++;
		return true;
	}
	else
		return false;
}
/*
void InfoDelCampo::estadoCampo(int numCampo) {
	if () {

	}
}*/

void InfoDelCampo::setNumCampo(int num) { numCampo = num; }
void InfoDelCampo::setEstado(char est) { estado = est; }

string InfoDelCampo::verVehiculo(int pla) {
	stringstream s;
	for (int i = 0; i < 10; i++)
		if(vecVe[i]->getPlaca()==pla)
			s << "----Vehiculo----" << endl << vecVe[i]->toString() << endl;
	return s.str();
}

string InfoDelCampo::toString(){
	stringstream s;

	s << "Numero de campo: " << numCampo << endl;
	//s << "Estado del campo: " << estadoCampo << endl;
	
	for (int i = 0; i < 10; i++)
		s << "----Vehiculo----" <<  endl;
	return s.str();
}