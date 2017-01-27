#ifndef FUNCTION_H_
#define FUNCTION_H_

#include <vector>
#include <list>
#include "attributes.hpp"
#include <string>
#include <map>

using namespace std;


#define INITIAL_OFFSET -2
#define UNDEFINED_START_LINE 99


typedef struct entry_t_{
	Type type;
	string name;
    int offset; //from the start of the function
	entry_t_(Type type, string name, int offset) : type(type), name(name), offset(offset) {}
} Param;


typedef struct _entry_t{
	Type returnType;
	string name;
	list<Param> parameters;
	int offsetNextParam;
	bool implemented; // true - implemented in the file
	int startLine;
	int offset;
	vector<int> calledFrom; // for unimplemented functions
	
	
	_entry_t(Type returnType, string name, bool implemented, int startLine) : 
		returnType(returnType), name(name), implemented(implemented), startLine(startLine) {offsetNextParam = 0; parameters=list<Param>();}
	
	bool insert(Type type, string name);
} Function;









class FunctionTable {
	
	
	
	public:
		map<string, Function> table;
	 	Function* get(string name);
		void push(Function f);
};



#endif /* FUNCTION_H_ */