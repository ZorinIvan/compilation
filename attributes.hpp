#ifndef __ATTRIBUTES_HPP
#define __ATTRIBUTES_HPP

#include <string>
#include <list>
#include <map>
#include <stack>
//#include "buffer.hpp"

using namespace std;

typedef enum {
	REAL, INT, STRUCT
} Type;

typedef struct
{
	Type type;
	string content;
	string place;
	int offset;
	string struct_type;
	/***** backpatch *****/
	int address;
	list<int> true_list; 
	list<int> false_list; 
	list<int> next_list; 
	
	std::list<std::pair<Type,string>> parameters;
	std::list<std::pair<Type,string>> dclparam;

} yystype;

#define YYSTYPE yystype

#endif
