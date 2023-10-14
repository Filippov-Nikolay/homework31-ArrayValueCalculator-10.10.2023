#include "Exception.h"

Exception::Exception(string m) { message = m; }

string Exception::GetMessage() const { return message; }
