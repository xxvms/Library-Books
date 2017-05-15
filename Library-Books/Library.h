#pragma once
#include <string>
#include "Book.h"

class Library
{
private: 
	//Book books[5];

	
public:
	void addBook2Lib(Book* book);
	Book getBook(int);


	Library();
	~Library();
};





