#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double f(const double x);

int main()
{
	double yp, yk, z;
	int n;

	cout << "yp = "; cin >> yp;
	cout << "yk = "; cin >> yk;
	cout << "n = "; cin >> n;

	cout << fixed;
	cout << "-----------------------------------------" << endl;
	cout << "|" << setw(5) << "y"    << "   |"
		        << setw(10) << "z" << " |"
		        << endl;
	cout << "-----------------------------------------" << endl;

	double dg = (yk - yp) / n;
	double y = yp;

	while (y <= yk)
	{
		z = f(1 + y*y) + pow(f(f(1) + pow(f(y*y),2)), 2);
		y += dg;

		cout << "|" << setw(7) << setprecision(2) << y << " |"
			        << setw(10) << setprecision(5) << z << " |"
			        << endl;
	}
	cout << "-----------------------------------------" << endl;
	return 0;
}
double f(const double x)
{
	if (abs(x) >= 1)
		return (cos(x/2)) / (1+(pow(sin(x),2)));
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
			double R = (x*x*x)/4*i*i - 2*i;
			a *= R;
			S += a;
		} while (i < 6);
		return S;
	}
}
