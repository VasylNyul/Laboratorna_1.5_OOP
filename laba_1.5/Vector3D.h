#include "Triad.h"
#include <iostream>
#include <string> 
#include <sstream>

#pragma once

class Vector3D
{
private:

	Triad triad;

public:

	Triad get_Triad() const { return triad; }
	void set_Triad(Triad triad) { this->triad = triad; }

	void init(Triad triad);
	void display() const;
	void read();

	friend Vector3D Suma(Vector3D a, Vector3D b);
	
	friend int Scal(Vector3D a, Vector3D b);

};

