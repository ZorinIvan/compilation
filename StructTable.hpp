#ifndef __STRUCTTABLE_HPP
#define __STRUCTTABLE_HPP

#include <list>
#include <string>
#include <map>
#include <iostream>
#include <ostream>
#include <iterator>
#include <stdbool.h>
#include "attributes.hpp"

using namespace std;

typedef struct entry_t {
	Type type;
	string name;
	int offset; //from the start of struct
	string struct_type;

	entry_t(Type type, string name, int offset) : type(type), name(name), offset(offset) {}
	entry_t(Type type, string name, int offset, string s) : type(type), name(name), offset(offset), struct_type(s) {}
} Entry;

/**
* Class StructTable represetns a stack of structs.
* @params struct_stack: a hash table of all defined structs.  Specified by following arguments:
*			-list<Entry>: list of all field of the struct. Each field is of the type Entry.
*			-string: the name of the struct. 
*		  
*/
class StructTable {
private:
	map<string,list<Entry> > struct_stack;
	map<string, int> offset_stack; //for each struct will save its offset 

public:
	StructTable();

	/**
	* Inserts a new regular field to the struct
	*/
	void insert(string structName, Type type, string name, int offset);
	
	/**
	* Inserts a new regular field to the struct
	*/
	void insert(string structName, string name, int offset, string struct_type);
	
	/**
	* Adds a new empty struct to the hash table
	*/
	void push(string structName);

	/**
	* Returns the offset of the struct
	*
	* @returns: -1 struct with a such name doesn't exist, else return int > 0
	*
	*/
	int getOffset(string structName);

	/**
	* Returns all a list of fields of the struct
	*
	* @requires a struct with a name "s" appears in the hash table
	* @returns a list of fields of the struct
	*/
	list<Entry> get(string s);
	
	void print();
};



#endif