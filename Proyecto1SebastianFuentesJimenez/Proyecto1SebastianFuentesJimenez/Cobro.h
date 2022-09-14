#pragma once

#include "Vehiculo.h"
#include "Hora.h"

class Cobro {
private:
	Vehiculo* vehiculo;
	Hora* entrada;
	Hora* salida;
	double total;

public:
	Cobro(Vehiculo* = NULL, Hora* = NULL, Hora* = NULL, double = 0.0);
	virtual ~Cobro();
	Vehiculo* getVehiculo();
	Hora* getHoraEnt();
	Hora* getHoraSal();
	double getTotal();

	void setVehiculo(Vehiculo*);
	void setHoraEnt(Hora*);
	void setHoraSal(Hora*);
	void setTotal(double tot);

	double calculoMonto(Vehiculo*,Hora*, Hora*);

	string toString();

};