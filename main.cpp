#include <iostream>
#include <string>
#include <conio.h>

#include "Curves.h"
#include "Line.h"
#include "Ellipsis.h"
#include "Hyperbole.h"

using namespace std;

void applyCommand(Curves* curvice) {
	system("@cls||clear");

	curvice->getY();

	_getch();
}

int main()
{

	Curves* classes[3] = { new Line(), new Ellipsis(), new Hyperbole() };

	int command;

	for (;;) {
		system("@cls||clear");

		cout << "Enter curves type number:" << endl;
		cout << "1. Line" << endl;
		cout << "2. Ellipsis" << endl;
		cout << "3. Hyperbole" << endl << endl;
		cout << "0. Exit" << endl << endl;

		cout << "Curves type: ";
		cin >> command;

		if (command >= 1 && command <= 3 )
		{
			applyCommand(classes[command - 1]);
		}
		if (command == 0)
		{
			exit(0);

		}
	}
}

