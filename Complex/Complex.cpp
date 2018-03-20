#include <iostream>
#include "Complex.h"
using namespace std;


		 Complex operator+ (const Complex &c1, const Complex &c2) {
			return Complex(c1.Real + c2.Real, c1.Image + c2.Image);
		}

		 Complex operator- (const Complex &c1, const Complex &c2) {
			 return Complex(c1.Real - c2.Real, c1.Image - c2.Image);
		 }

		 Complex operator* (const Complex &c1, const Complex &c2) {
			 double i, j;
			 i = c1.Real * c2.Real - c1.Image * c2.Image;
			 j = c1.Real * c2.Image + c2.Real * c1.Image;
			 return Complex(i, j);
		 }

		 Complex operator/ (const Complex &c1, const Complex &c2) {
			 double k, i, j;
			 k = c2.Real * c2.Real + c2.Image * c2.Image;
			 i = (c1.Real * c2.Real + c1.Image * c2.Image) / k;
			 j = (c2.Real * c1.Image - c1.Real * c2.Image) / k;
			 return Complex(i, j);

		  }

		 ostream &operator<<(ostream &s, Complex &c) {
			if (c.Image<0) s << c.Real << " + i*(" << c.Image << ")";
			else s << c.Real << " + i*" << c.Image;
			return s;
		}

		 istream &operator >> (istream &s, Complex &c) {
			cout << "Enter real part: ";
			s >> c.Real;
			cout << "Enter imagine part: ";
			s >> c.Image;
			return s;
		}


