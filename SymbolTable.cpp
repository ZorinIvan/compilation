#include "SymbolTable.hpp"



void SymbolTable::insert(string name, Type type, int offset) {
	map<string, SymbolEntry>& top_map = symbol_stack.front();

	top_map[name] = SymbolEntry(type, offset_stack.front(), offset, false);

	offset_stack.front() = offset_stack.front() + offset;
}


void SymbolTable::push() {
	symbol_stack.push_front(map<string, SymbolEntry>());

	offset_stack.push_front(offset_stack.front());
}

map<string, SymbolEntry> SymbolTable::pop() {
	map<string, SymbolEntry> table = symbol_stack.front();
	symbol_stack.pop_front();
	offset_stack.pop_front();

	return table;
}

map<string, SymbolEntry> SymbolTable::top() {
	return symbol_stack.front();
}

SymbolEntry SymbolTable::get(string var) {
	bool isTop = true;

	for (list< map< string, SymbolEntry > >::iterator it = symbol_stack.begin(); it != symbol_stack.end(); ++it) {
		map<string, SymbolEntry>& entriesMap = *it;

		if (entriesMap.find(var) != entriesMap.end()) {
			SymbolEntry entry = entriesMap[var];
			entry.isTop = isTop;
			return entry;
		}

		isTop = false;
	}

	return SymbolEntry(INT, -1, -1, false);
}

void SymbolTable::insertStruct(string name, string struct_type, int offset) {
	map<string, SymbolEntry>& top_map = symbol_stack.front();

	top_map[name] = SymbolEntry(STRUCT, offset_stack.front(), offset, false, struct_type);

	offset_stack.front() = offset_stack.front() + offset;
}

void SymbolTable::print(){
	cout << "********SymbolTable***********" << endl;
	cout << endl;
	for (auto& field : symbol_stack){
		cout<<"////START SCOPE////"<< endl;
		for(map<string, SymbolEntry >::iterator it = field.begin(); it != field.end(); it++){
			cout<<endl;
			//cout<<"/////SYMBOL/////"<<endl;
			cout<<"var name: "<<it->first<<endl;
			it->second.print();
		}
		cout<<"////END SCOPE////"<< endl;
	}
	cout << "**************************"<<endl;
	cout<<endl;
}

int SymbolTable::currentOffset(){
	return offset_stack.front();
}