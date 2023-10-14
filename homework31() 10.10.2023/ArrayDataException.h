#pragma once
#include <iostream>

using namespace std;

class ArrayDataException {
	string message;
public:
	ArrayDataException(string, int r, int c);
	string GetMessage() const;
};

