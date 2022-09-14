#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Chofer {
private:
	string nombre;
	string cedula;
public:
	Chofer();     
	Chofer(string nom, string ced);
	virtual ~Chofer();
	string toString();

	void setNombre(string nom);
	void setCedula(string ced);
	string getCedula();
	string getNombre();

};




