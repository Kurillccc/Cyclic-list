#include <iostream>

#include "Monom.h"

using namespace std;

unsigned int main()
{
	setlocale(LC_ALL, "rus");

	///////////////Моном//////////////////////

	string str1 = "3X1^1X2^1X3^1X4^1";
	string str2 = "-2X1^1X2^1X3^1X4^1";

	int count = 10;
	int degree = 5;

	Monom a(str1, count, degree);
	Monom b(str2, count, degree);
	Monom c(a);
	Monom d = a;

	cout << "a: " << a.mtostr(count, degree) << endl;
	cout << "b: " << b.mtostr(count, degree) << endl << endl;
	cout << "c(a): " << c.mtostr(count, degree) << endl;
	cout << "d = a: " << d.mtostr(count, degree) << endl << endl;

	Monom sum = a + b;
	cout << "a + b: " << sum.mtostr(count, degree) << endl;

	Monom dif = a - b;
	cout << "a - b: " << dif.mtostr(count, degree) << endl << endl;

	Monom multiply = a.multiply(b, count, degree);
	cout << "m1 * m2: " << multiply.mtostr(count, degree) << endl << endl;

	system("pause");

	return 0;
}