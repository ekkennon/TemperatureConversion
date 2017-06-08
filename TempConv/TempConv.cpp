// TempConv.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, wchar_t argv[])
{
	cout << "Welcome to the Temperature Converter!\n";

	char viewKelvin;
	while (viewKelvin != 'Y' && viewKelvin != 'N') {
		cout << "Would you like to see degrees Kelvin (K) in the results? (Y/N): ";
		cin >> viewKelvin;
	}

	int type;
	cout << "Select conversion type (1 = F to C, 2 = C to F, 0 = end): ";
	cin >> type;

	while (type == 1 || type == 2) {
		int fromTemp;
		cout << "Enter your temperature: ";
		cin >> fromTemp;

		string fromName;
		string toName;
		int toTemp;
		switch (type) {
		case 1:
			fromName = "Fahrenheit";
			toName = "Celsius";
			toTemp = 5 / 9 * (fromTemp - 32);
			break;
		case 2:
			fromName = "Celsius";
			toName = "Fahrenheit";
			toTemp = (9 / 5 * fromTemp) + 32;
		}

		cout << "A temperature of " << fromTemp << " " << fromName << " converted to " << toName << " = " << toTemp << " degrees " << toName;

		if (viewKelvin == 'Y') {
			cout << viewKelvin;
		}

		cout << "\nSelect conversion type (1 = F to C, 2 = C to F, 0 = end): ";
		cin >> type;
	}
	
	cout << "Thank you for using the temperature converter!";
	system("pause");

    return 0;
}
