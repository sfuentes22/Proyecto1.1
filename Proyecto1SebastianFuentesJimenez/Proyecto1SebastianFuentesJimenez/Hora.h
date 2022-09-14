#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Hora {
private:
	int horas;
	int minutos;
	int segundos;
public:
	Hora(int = 0, int = 0, int = 0); 
	virtual ~Hora();
	
	int getHoras();
	int getMinutos();
	int getSegundos();
	
	void setHoras(int h);
	void setMinutos(int m);
	void setSegundos(int s);
	string toString();
};
