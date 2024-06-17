#include<iostream>

using namespace std;

class Base {
public:
	// void func() {
	virtual void func() {
		cout << "Base::func" << endl;
	}
};

class Drive : public Base {
public:
	void func() {
		cout << "Drive::func" << endl;
	}
};

int main() {
	Base *pbase1 = new Base();
	Base *pbase2 = new Drive(); //when new the Drive converst to the Base class

	pbase1->func();
	pbase2->func();

	typedef void(*Func)(void);

	long *vptr1 = (long*)*(long*)pbase1;
	Func f1 = (Func)vptr1[0];
	f1();

	long *vptr2 = (long*)*(long*)pbase2;
	Func f2 = (Func)vptr2[0];
	f2();

	cin.get();
	return 0;

}