#include <iostream>
#include <conio.h>
#include "Complex.h"
using namespace std;

Complex calc(Complex &t, Complex &z, char &oper) {
	switch (oper) {
	case '*':
		return t * z;
	case '+':
		return t + z;
	case '-':
		return t - z;
	case '/':
		return t / z;
	default:
		return 0;
	}
}

void main() {
	char o, a;
	Complex c1, c2;
	do {
		system("CLS");
		cin >> c1;
		cout << "Enter operand\n";
		cin >> o;
		cin >> c2;

		cout << c1 << " " << o << " " << c2 << " = " << calc(c1, c2, o) << endl << endl;
		cout << "Do you want to repeat?" << endl << "Y/N" << endl;

		cin >> a;
		a = tolower(a);
	} while (a == 'y');
	exit(1);
}
