#include "Triad.h"
#include <iostream>
#include <string> 
#include <sstream>

#pragma once

using namespace std;

void Triad::init(int x, int y, int z)
{
	set_x(x);
	set_y(y);
	set_z(z);
}

void Triad::display() const
{
	cout << endl;
	cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}

void Triad::read()
{
	int x, y, z;

	cout << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "z = "; cin >> z;
	init(x, y, z);
}

Triad Triad::Sum(Triad a, int b )
{
	Triad s;


	s.x = a.x + b;
	s.y = a.y + b;
	s.z = a.z + b;

	return s;
}

Triad Triad::Mult(Triad a, int b)
{
	Triad m;

	m.x = a.x * b;
	m.y = a.y * b;
	m.z = a.z * b;

	return m;
}

bool Equal(Triad a)
{
	if (a.x == a.y)
		return true;
	if (a.x == a.z)
		return true;
	if (a.y == a.z)
		return true;
	if (a.x == a.y == a.z)
		return true;
	else
		return false;
}

/*/
string Triad::toString() const
{
	stringstream sout;

	sout << "x = " << x << endl;
	sout << "y = " << y << endl;
	sout << "z = " << z << endl;

	return sout.str();
}
*/