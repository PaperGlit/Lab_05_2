// Lab_05_2.cpp
// Лазар Владислав
// Лабораторна робота No 5.2
// Обчислення суми ряду Тейлора за допомогою функцій
// Варіант 11

#include <iostream>
#include <iomanip>

using namespace std;

double S(const double x, const double eps);

int main()
{
	double xp, xk, x, dx, eps, s = 0;
	int n = 0;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "arcth(x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	x = xp;

	while (x <= xk && abs(x) > 1)
	{
		s = S(x, eps);

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << atanh(1 /x) << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;

		x += dx;
	}

	cout << "-------------------------------------------------" << endl;

	return 0;
}

double S(const double x, const double eps)
{
	int n = 0;
	double a = 1 / x;
	double s = a;

	do {
		n++;
		double R = (2.0 * n - 1) / (2.0 * n + 1) * (1 / (x * x));
		a *= R;
		s += a;
	} while (abs(a) >= eps);

	return s;
}