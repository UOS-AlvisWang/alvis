#include <myString.h>

String::String()
{
	_str = nullptr;
}

~String::String()
{
	if(_str)
	{
		delete[] _str;
		_str = nullptr;
	}
}
