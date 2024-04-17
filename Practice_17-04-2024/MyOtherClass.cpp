#include "MyOtherClass.h"


void MyOtherClass::print() {
	cout << x << " " << y;
}

MyOtherClass::MyOtherClass(int x, int y) {
	this->x = x;
	this->y = y;
}
