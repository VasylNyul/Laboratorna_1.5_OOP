#include <iostream>
#include "Vector3D.h"
#include <string> 

using namespace std;

int main()
{
	Vector3D v, c, d;
	Triad t;

	v.read(); cout << "Vector 1 = "; v.display();
	c.read(); cout << "Vector 2 = "; c.display();
	
	Vector3D k = Suma(v, c); cout << "Suma = "; k.display(); cout << endl;

	cout << "Scal9rnui dobutok vectoriv = " << Scal(v, c) << endl;

	t.read();
	cout << "Rivnistb = " << Equal(t) << endl;
	
	return 0;

}

