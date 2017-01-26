#include "buffer.hpp"
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;



void Buffer::emit(const string code) {
	bufferList.push_back(code);
}



int Buffer::nextQuad() {
	return bufferList.size() ;
}


/** backpatch the given list
* 
* @params: list: quad lines which has an unfinished goto (UJUMP)
*		   line: destination address 
*
* 
*/

void Buffer::backpatch(std::list<int>& l, int line) {
	ostringstream os;
	os << line;
	for (list<int>::iterator i = l.begin(); i != l.end(); i++) {
		bufferList[*i] += os.str();
	}
}

void Buffer::print() {
	for (int i = 0; i < bufferList.size(); i++) {
		cout << bufferList[i] << endl;
	}
}

list<int> merge(list<int> l1, list<int> l2)
{
	list<int> newList;
	newList.merge(l1);
	newList.merge(l2);
	return newList;
}

list<int> makelist(int litem)
{
	list<int> newList;
	newList.push_front(litem);
	return newList;
}