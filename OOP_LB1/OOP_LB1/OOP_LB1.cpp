#include <iostream>
#include <cmath>
#define PI 3.14

using namespace std;

class Cirle{
private:
	int x;
	int y;
	int radius;

public:
	Cirle(int a, int b, int c) { x = a; y = b; radius = c; }	//конструктор
	~Cirle() {}													//диструктор

	int GetX() { return x; }
	int GetY() { return y; }
	int GetRadius() { return radius; }

	void SetX(int a) { x = a; }
	void SetY(int b) { y = b; }
	void SetRadius(int c) { radius = c; }

	double square();
	double longOfcirle();
};

double Cirle::square(){											//шукає площу
	return (PI * pow(radius, 2));
}

double Cirle::longOfcirle(){									//шукає довжину кола
	return (2 * PI * radius);
}

int main(){
	Cirle obj(1, 2, 3);

	cout << obj.GetX() << endl;
	cout << obj.GetY() << endl;
	cout << obj.GetRadius() << endl;

	cout << obj.square() << endl;
	cout << obj.longOfcirle() << endl;

	obj.SetX(3);
	obj.SetY(2);
	obj.SetRadius(1);

	cout << obj.GetX() << endl;
	cout << obj.GetY() << endl;
	cout << obj.GetRadius() << endl;

	cout << obj.square() << endl;
	cout << obj.longOfcirle() << endl;

	return 0;
}