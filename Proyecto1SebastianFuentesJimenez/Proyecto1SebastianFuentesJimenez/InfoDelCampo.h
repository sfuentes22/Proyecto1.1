#pragma once
#include "Cobro.h"

class InfoDelCampo {
private:
	Vehiculo * vecVe[10];
	int can;
	int tam;
	int numCampo;
	char estado;
	Vehiculo* vehiculos;

public:
	InfoDelCampo();
	virtual ~InfoDelCampo();

	int getCan();
	int getMumCampo();
	char getEstado();

	bool ingresarVehiculo(Vehiculo*);

	void setNumCampo(int num);
	void setEstado(char est);

	string verVehiculo(int pla);

	string toString();

};
