#include "Parqueo.h"


Parqueo::Parqueo(int val){
	can = 0;
	tam = val;
	vec = new InfoDelCampo * [tam];  // Creación del vector interno de la Contenedora.
	for (int i = 0; i < tam; i++)   // Limpieza del vector interno.....
		vec[i] = NULL;

}
Parqueo:: ~Parqueo(){
	for (int i = 0; i < can; i++)
		delete vec[i];
	delete[] vec;
	cout << "Contenedor Eliminado.." << endl;
}
int Parqueo::getCan() { return can; }
int Parqueo::getTam() { return tam; }




string Parqueo::toString(){ //11-09
	stringstream s;
	s << "----PARQUEO----" << endl;
	for (int i = 0; i < can; i++)
		s << vec[i]->toString() << endl;
	return s.str();
}