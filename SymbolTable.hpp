#ifndef __SYMBOLTABLE_HPP
#define __SYMBOLTABLE_HPP

#include <list>
#include <string>
#include <map>
#include <iostream>
#include <ostream>
#include <stdbool.h>
#include "attributes.hpp"

using namespace std;


class SymbolEntry {
public:
	Type type;
	int offset; //offset from the start of the struct
	bool isTop;
	int size;
	string struct_type;

	SymbolEntry() {
		type = INT;
		offset = 0;
		isTop = false;
		size = 1;
	}

	SymbolEntry(Type type, int offset, int size, bool isTop) {
		this->type = type;
		this->offset = offset;
		this->isTop = isTop;
		this->size = size;
	}

	SymbolEntry(Type type, int offset, int size, bool isTop, string struct_type) {
		this->type = type;
		this->offset = offset;
		this->isTop = isTop;
		this->size = size;
		this->struct_type = struct_type;
	}
	
	void print(){
		
		cout << "type: " << type;
		cout << " offset: " << offset;
		cout << " size: " << size;
		cout << " struct_type: " << struct_type << endl;
	}

};


class SymbolTable {
	list< map< string, SymbolEntry > > symbol_stack;
	list< int > offset_stack;

public:
	//list< SymbolEntry > sortedList;
	SymbolTable() {
		offset_stack.push_front(0);
	}

	/**
	* Inserts a new SymbolEntry to the top member of the stack.
	*
	* @effects: symbol_stack - adds a new SymbolEntry into the head of list.
	*			offset_stack - adds an offset to the head of offset_stack list.
	* @requires: name != null, offset > 0;
	*
	*/
	bool insert(string name, Type type, int offset);

	/**
	* Adds a new "scope" to the symbol table
	*
	* @effects: symbol_stack - Inserts a new empty element at the beginning of the list
	*			offset_stack - Inserts a new element at the beginning of the list
	*						   with a copied value of the prev head
	*/
	void push();

	/**
	* Removes the element on top of the stack. I.e removes a current scope from symbol table
	*
	* @effects: symbol_stack - Removes the element on top of the stack
	*			offset_stack - Removes the element on top of the stack
	*						 
	* @returns: map<string, SymbolEntry> - a current scope
	*
	*/
	map<string, SymbolEntry> pop();

	/**
	* Returnes the element on top of the stack. I.e returnes a current scope from the symbol table
	*
	* @effects: none
	*
	* @returns: map<string, SymbolEntry> - a current scope
	*
	*/
	map<string, SymbolEntry> top();

	/**
	* Returnes the variable that is specified by name from the Symbol table. 
	* a returned variable is the closest to the top of the stack.
	*
	* @effects: none
	* @returns: SymbolEntry - if found a variable with a such name
	*			SymbolEntry.offset = -1 : not found
	*
	*/
	SymbolEntry get(string var);

	/**
	* Inserts a new SymbolEntry to the top member of the stack.
	*
	* @effects: symbol_stack - adds a new SymbolEntry into the head of list.
	*			offset_stack - adds an offset to the head of offset_stack list.
	* @requires: name != null, offset > 0;
	*
	*/
	bool insertStruct(string name, string struct_type, int offset);
	
	void print();
	int currentOffset();
	void startFunction();
	void endFunctin();
};



#endif

