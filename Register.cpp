#include "Register.hpp"


int Register::intRegCnt = 1;
int Register::realRegCnt = 0;

Register::Register()
{
}


Register::~Register()
{
}

string Register::getNewReg(Type type) {
	if (type == INT) {
		int regNum = intRegCnt;
		intRegCnt++;
		return("I" + to_string(regNum));
	}
	int regNum = realRegCnt;
	realRegCnt++;
	return("R" + to_string(regNum));
}
