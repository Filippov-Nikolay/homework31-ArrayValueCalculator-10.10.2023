#include "ArraySizeException.h"

ArraySizeException::ArraySizeException(string m) : Exception(m) { }

string ArraySizeException::GetMessage() const { return message; }
