#include "Vector3D.h"
#include <iostream>
#include <cmath>
#include <string> 
#include <sstream>

#pragma once

using namespace std;

void Vector3D::init(Triad triad)
{
	set_Triad(triad);
}

void Vector3D::display() const
{
	triad.display();
}

void Vector3D::read()
{
	Triad t;

	cout << endl;
	cout << "Triad = " << endl;
	t.read();

	init(t);
}

Vector3D Suma(Vector3D a, Vector3D b)
{
	Vector3D ress;

	ress.triad.set_x(a.triad.get_x() + b.triad.get_x());
	ress.triad.set_y(a.triad.get_y() + b.triad.get_y());
	ress.triad.set_z(a.triad.get_z() + b.triad.get_z());

	return ress;
}

int Scal(Vector3D a, Vector3D b)
{
	return (a.triad.get_x() * b.triad.get_x() + a.triad.get_y() * b.triad.get_y() + a.triad.get_z() * b.triad.get_z());
}
