#include "Line.h"

void Line::getY()
{
	float x, k;

	cout << "Enter k = ";
	cin >> k;

	cout << "Enter x = ";
	cin >> x;

	cout << "y = kx; x = " << x << "; k = " << k << "; y = " << k * x << endl;
}
