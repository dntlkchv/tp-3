#include "Hyperbole.h"

void Hyperbole::getY()
{
	float x, k;

	cout << "Enter k = ";
	cin >> k;
	cout << "Enter x = ";
	cin >> x;

	if (x == 0) {
		cout << "Devide by zero!" << endl;
		return;
	}

	cout << "x = k / x; x = " << x << "; k = " << k << "; y = " << k / x << endl;
}
