#ifndef COMPLEX_H
#define COMPLEX_H
using namespace std;
class Complex {
private:
	double Real, Image;
public:
	Complex() {}
	Complex(double r) { Real = r; Image = 0; }
	Complex(double r, double i) { Real = r; Image = i; }
	~Complex() {}

	friend Complex operator+ (const Complex &, const Complex &);
	friend Complex operator- (const Complex &, const Complex &);
	friend Complex operator* (const Complex &, const Complex &);
	friend Complex operator/ (const Complex &, const Complex &);
	friend ostream& operator<<(ostream &, Complex &);
	friend istream& operator >> (istream &, Complex &);
};

#endif // !COMPLEX_H

