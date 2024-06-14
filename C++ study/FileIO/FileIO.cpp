#include<fstream>
#include<iostream>
#include<string>

using namespace std;

class pet {
public:
	pet(string name);
	~pet();

	virtual void play(void);

	static int getCount();

protected:
	string name;

private:
	static int num;
};

int pet::num = 0;

pet::pet(string name) {
	this->name = name;
	num++;
}

pet::~pet() {
	num--;
}

void pet::play(void) {
	cout << this->name << "pet play" << endl;
}

int pet::getCount(){
	cout << "num = " << num << endl;
	return num;
}

class dog : public pet
{
public:
	dog(string name);

	void play(void);
};

dog::dog(string name) : pet(name){}

void dog::play(void) {
	cout << this->name << "dog play" << endl;
}

int main() {
	pet::getCount();

	pet *od = new dog("od");
	od->play();

	{
		pet b = pet("bb");
		b.getCount();
	}

	pet::getCount();
	cin.get();
}