#include <iostream>
#include <math.h>

using namespace std;

void calcSquareEquat(int _a, int _b, int _c) {

	double D, x1, x2, real, imagin;

	D = pow(_b, 2) - 4 * _a * _c;

	if (D > 0) {
		x1 = (-_b - sqrt(D)) / (2 * _a);
		x2 = (-_b + sqrt(D)) / (2 * _a);
		cout << "X1= " << x1 << " X2= " << x2 << endl;
	}
	else if (D == 0) {
		x1 = -_b / (2 * _a);
		cout << "X= " << x1 << endl;
	}
	else {
		real = -_b / (2 * _a);
		imagin = sqrt(-D) / (2 * _a);
		cout << "D= " << D << endl;
		cout << "X1 = " << real << "+" << imagin << "i" << endl;
		cout << "X2 = " << real << "-" << imagin << "i" << endl;
	}
}

void main() {

	int a, b, c;
	string str;

	while (str != "quit") {
		cout << "Type members for squre equation:" << endl;
		cout << "Type a - ";
		cin >> a;
		cout << "Type b - ";
		cin >> b;
		cout << "Type c - ";
		cin >> c;

		calcSquareEquat(a, b, c);

		cout << "Please type \"quit\" to exit or type \"any more\" for continue" << endl;
		cin >> str;
	}
}