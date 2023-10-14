#include <iostream>
#include <string>
#include "ArrayDataException.h"

using namespace std;

ArrayDataException::ArrayDataException(string m, int r, int c) {
	cout << "[" << r << "]" << "[" << c << "]";
	message = m;
}

string ArrayDataException::GetMessage() const { return message; }
