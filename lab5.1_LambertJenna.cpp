//Jenna Lambert
//Lab 5.1
#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//declaring variables and formatting
	int a = 100, b;
	double c;
	cout << setprecision(2) << fixed;

	//table headers
	cout << "Integer\t" << "Square Root\n";

	//the loop
	for (b = 0; a >= 3; a--){
		b = a % 3;
		if (b == 0) {
			c = sqrt(a);
			cout << a << "\t" << c << "\n";
		}
	}
}