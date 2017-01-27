#ifndef REGISTER_HPP_
#define REGISTER_HPP_

#include "attributes.hpp"

class Register
{
public:
	Register();
	~Register();
	static string getNewReg(Type type);
	static void reset();
	static void decrement(Type type);

	static int intRegCnt;
	static int realRegCnt;
};


#endif