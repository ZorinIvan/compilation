# Makefile for Project part 3
all: rx-cc 

part3.tab.cpp part3.tab.hpp: part3.ypp attributes.hpp Register.hpp SymbolTable.hpp StructTable.hpp buffer.hpp Function.hpp
	bison -d part3.ypp

lex.yy.c: part3.lex part3.tab.hpp attributes.hpp
	flex part3.lex

rx-cc: lex.yy.c part3.tab.hpp part3.tab.cpp Function.hpp Function.cpp buffer.cpp buffer.hpp attributes.hpp Register.cpp Register.hpp StructTable.cpp StructTable.hpp  SymbolTable.cpp SymbolTable.hpp

	g++ -std=c++11 -o rx-cc lex.yy.c part3.tab.cpp buffer.cpp Register.cpp StructTable.cpp SymbolTable.cpp Function.cpp

clean:
	rm rx-cc part3.tab.cpp lex.yy.c part3.tab.hpp 