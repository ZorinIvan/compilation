#ifndef BUFFER_HPP_
#define BUFFER_HPP_

#include <vector>
#include <list>
#include <string>

using namespace std;


class Buffer {
public:
	Buffer(){};
	~Buffer(){};

	void print();
	void emit(const string code);
	void backpatch(list<int>& list, int line);
	int nextQuad();
	void insertHeader(string line);
private:
	vector<string> bufferList;
};

list<int> merge(list<int> l1, list<int> l2);
list<int> makelist(int litem);


#endif /* QUADBUFFER_HPP_ */