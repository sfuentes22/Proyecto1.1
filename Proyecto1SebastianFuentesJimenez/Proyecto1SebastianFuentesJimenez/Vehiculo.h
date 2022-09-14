#pragma once
#include "Chofer.h"

class Vehiculo {
private:
	string marca;
	int placa;
	float tonelaje;
	string color;
	Chofer* chof;

public:
	Vehiculo(string = "", int = 0, float = 0.0, string = "", Chofer* = NULL);
	virtual ~Vehiculo();

	string getMarca();
	int getPlaca();
	float getTonelaje();
	string getColor();
	Chofer* getChofer();

	void setMarca(string mar);
	void setPlaca(int pla);
	void setTonelaje(float ton);
	void setColor(string color);
	void setChofer(Chofer*);

	string toString();

};
