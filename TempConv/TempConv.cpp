// Erin K Kennon - attempt 2
// TempConv.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace std;

double FtoC(double t);
double CtoF(double t);
void showDegreesK(double);

int main(int argc, wchar_t argv[])
{
	double temp, result;
	int choice;

	cout << "Welcome to the Temperature Converter!" << endl;

	char viewKelvin;
	while (viewKelvin != 'Y' && viewKelvin != 'N') {
		cout << "Would you like to see degrees Kelvin (K) in the results? (Y/N): ";
		cin >> viewKelvin;
	}

	do {
		cout << "Select conversion type (1 = F to C, 2 = C to F, 0 = end): ";
		cin >> choice;

		if (choice == 1) {
			cout << "Enter your Fahrenheit temperature: ";
			cin >> temp;
			result = FtoC(temp);
			cout << "A temperature of " << temp << " F converted to Celsius = " << result << " C." << endl;
			if (viewKelvin == 'Y') {
				showDegreesK(result);
			}
		}
		else if (choice == 2) {
			cout << "Enter your Celsius temperature: ";
			cin >> temp;
			result = CtoF(temp);
			cout << "A temperature of " << temp << " C converted to Fahrenheit = " << result << " F.";
			if (viewKelvin == 'Y') {
				showDegreesK(temp);
			}
		}
	} while (choice != 0);


	cout << "\nThank you for using the temperature converter!" << endl;
	system("pause");

    return 0;
}

double FtoC(double t) {
	return (5.0 / 9.0 * (t - 32.0));
}

double CtoF(double t) {
	return t * 9 / 5 + 32;
}

void showDegreesK(double celsius) {
	double kelvin = celsius + 273.15;
	if (kelvin < 0) {
		cout << "\n\t" << celsius << " is an invalid temperature.";
	}
	else {
		cout << "\n\tThis is also a temperature of: " << kelvin << " K" << endl;
	}

}
