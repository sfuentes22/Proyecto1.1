#pragma once
#include "InfoDelCampo.h"

class Parqueo {
private:
	InfoDelCampo * * vec;
	int can;
	int tam;
public:
	Parqueo(int val);
	virtual ~Parqueo();
	int getCan();
	int getTam();
	bool ingresaCampo(InfoDelCampo*);
	string toString();

};
