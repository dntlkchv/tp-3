#include "Ellipsis.h"

void Ellipsis::getY()
{
	float x, a, b;

	cout << "Enter a = ";
	cin >> a;

	cout << "Enter b = ";
	cin >> b;

	cout << "Enter x = ";
	cin >> x;

	if (x > a) {
		cout << "|x| >= a" << endl;
		return;
	}

	float num = (1 - x * x / a / a) * b * b;

	float y = pow(num, 1.f / 2);

	if (y) {
		cout << "a = " << a << "; b = " << b << "; y1 = " << y << "; y2 = " << -y << endl;
	}
	else {
		cout << "a = " << a << "; b = " << b << "; y = " << y << endl;
	}
}
