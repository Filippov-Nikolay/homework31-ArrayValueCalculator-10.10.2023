#pragma once
#include <iostream>
#include "Exception.h"

using namespace std;

class ArraySizeException : public Exception {
public:
	ArraySizeException(string m);
	virtual string GetMessage() const;
};

