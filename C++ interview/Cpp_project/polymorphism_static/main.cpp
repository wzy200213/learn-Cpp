#include<iostream>
using namespace std;

class A
{
public:
	int sum(int a, int b) {
		cout << "int func" << endl;
		return a + b;
	}

	double sum(double a, double b) {
		cout << "double func" << endl;
		return a + b;
	}
};

int main() {
	A a;
	cout << "int:" << a.sum(1, 1) << endl;
	cout << "double:" << a.sum(1.0, 1.0) << endl;

	cin.get();

	return 0;
}