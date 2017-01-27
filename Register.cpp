#include "Register.hpp"


int Register::intRegCnt = 3;
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

void Register::reset(){
	intRegCnt = 3;
	realRegCnt = 0;
}


void  Register::decrement(Type type){
	if(type == INT) intRegCnt--;
	else realRegCnt--;
}
