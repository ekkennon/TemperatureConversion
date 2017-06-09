// Erin K Kennon
// TempConv.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace std;

void showDegreesK(double celsius) {
	double kelvin = celsius + 273.15;
	if (kelvin < 0) {
		cout << "\n\t" << celsius << " is an invalid temperature.";
	}
	else {
		cout << "\n\tThis is also a temperature of: " << kelvin << " K" << endl;
	}
	
}

int main(int argc, wchar_t argv[])
{
	cout << "Welcome to the Temperature Converter!" << endl;

	char viewKelvin;
	while (viewKelvin != 'Y' && viewKelvin != 'N') {
		cout << "Would you like to see degrees Kelvin (K) in the results? (Y/N): ";
		cin >> viewKelvin;
	}

	int type;
	cout << "Select conversion type (1 = F to C, 2 = C to F, 0 = end): ";
	cin >> type;

	while (type == 1 || type == 2) {
		double celsius;
		double fahrenheit;
		switch (type) {
		case 1:
			cout << "Enter your Fahrenheit temperature: ";
			cin >> fahrenheit;
			celsius = ((fahrenheit - 32) * 5) / 9;
			cout << "A temperature of " << fahrenheit << " Fahrenheit converted to Celsius = " << celsius << " C.";
			break;
		case 2:
			cout << "Enter your Celsius temperature: ";
			cin >> celsius;
			fahrenheit = celsius * 9 / 5 + 32;
			cout << "A temperature of " << celsius << " Celsius converted to Fahrenheit = " << fahrenheit << " F.";
		}

		if (viewKelvin == 'Y') {
			showDegreesK(celsius);
		}

		cout << "\nSelect conversion type (1 = F to C, 2 = C to F, 0 = end): ";
		cin >> type;
	}
	
	cout << "\nThank you for using the temperature converter!" << endl;
	system("pause");

    return 0;
}

