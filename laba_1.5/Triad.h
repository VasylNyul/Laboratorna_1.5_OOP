#include <iostream>
#include <string> 
#include <sstream>

#pragma once

class Triad
{
private:

	int x, y, z ;

public:

	int get_x() const { return x; }
	int get_y() const { return y; }
	int get_z() const { return z; }

	void set_x(int x){ this->x = x; };
	void set_y(int y){ this->y = y; };
	void set_z(int z){ this->z = z; };

	void init(int x, int y, int z);
	void display() const;
	void read();

	Triad Sum(Triad a, int b);

	Triad Mult(Triad a, int b);

	friend bool Equal(Triad a);
	
	//string toString() const;
	
};

