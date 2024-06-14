#include<iostream>

using namespace std;

class A
{
public:
	void func1(){}
	void func2(){}

	int num;
};

//class B1 : public A
class B1 : virtual public A
{
public:
	void func1(){}
};

//class B2 : public A
class B2 : virtual public A
{
public:
	void func2() {}
};

class C : public B1, public B2
{
};


int main() {
	C c{};
	c.B1::num = 1;
	c.B2::num = 2;

	cout << "c.B1::num = " << c.B1::num << endl;
	cout << "c.B1::num = " << &c.B1::num << endl;
	cout << "c.B2::num = " << c.B2::num << endl;
	cout << "c.B2::num = " << &c.B2::num << endl;

	cin.get();
}