#include <iostream>

using namespace std;

int main() {
	// heart function (X^2 + Y^2 - a)^3 - X^2 * Y^3 = 0
	double step = 0.05;
	
	double a = 1;
	double bound = 1.3 * sqrt(a);

	for (double y = bound; y >= -bound; y -= step)
	{
		for (double x = -bound; x <= bound; x += step / 2)
		{
			double result = pow((pow(x, 2) + pow(y, 2) - a), 3) - pow(x, 2) * pow(y, 3);
			if (result <= 0)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	cin.get();
}