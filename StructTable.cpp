#include "StructTable.hpp"



StructTable::StructTable()
{
}


void StructTable::insert(string structName, Type type, string name, int offset) {
	Entry e = Entry(type, name, offset_stack[structName]);
	struct_stack[structName].push_back(e);
	offset_stack[structName] += offset;
}

void StructTable::insert(string structName, string name, int offset, string struct_type) {
	Entry e = Entry(STRUCT, name, offset_stack[structName], struct_type);
	struct_stack[structName].push_back(e);
	offset_stack[structName] += offset;
}

void StructTable::push(string name) {
	struct_stack.insert(pair<string,list<Entry>>(name, list<Entry>()));
	offset_stack.insert(pair<string, int>(name, 0));
}

int  StructTable::getOffset(string structName) {
	if (struct_stack.find(structName) != struct_stack.end()) {
		return offset_stack[structName];
	}
	return -1;
}

list<Entry> StructTable::get(string s) {
	return struct_stack[s];
}

void StructTable::print(){
	for(map<string,list<Entry>>::iterator it = struct_stack.begin(); it != struct_stack.end(); it++){
		cout << "/////////////STRUCT/////////////" << endl;
		cout << "Struct name: " << it->first << endl;
		for (auto& field : it->second){
			cout << "name: " << field.name << endl;
			cout << "type: " << field.type << endl;
			cout << "offset: " << field.offset << endl;
			cout << "struct_type: " << field.struct_type << endl;
		}
		cout << "/////////////STRUCT/////////////" << endl;
	}
}
