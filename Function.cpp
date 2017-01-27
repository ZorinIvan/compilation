#include "Function.hpp"


bool Function::insert(Type type, string name){

	for (auto& arg : parameters){
		if(arg.name == name) return false;
	}
	Param p = Param(type, name, offsetNextParam);
	offsetNextParam++;
	
	parameters.push_back(p);
	return	true;
}

Function* FunctionTable::get(string name){
	map<string, Function>::iterator itr = table.find(name);
	if (itr == table.end()) {
		return NULL;
	}
	return &(itr->second);
}

void FunctionTable::push(Function f){
	table.insert(pair<string,Function>(f.name, f));
}