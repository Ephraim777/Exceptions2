#pragma once
#include <stdexcept>
class MyEx: public std::domain_error
{ private:
	const char * message;
public:
	MyEx(const const char * msg) : message(msg), domain_error(msg) {};

	const char * what () const override {
		return message;
	}
	


};