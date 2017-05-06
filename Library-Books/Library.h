#pragma once
#include <string>
class Library
{
	
public:
	Library();
	Book addBook2Lib(Book * book);
	~Library();
};

class Book
{
private:
	std::string author;
	std::string title;
	int publicationYear;
public:
	Book();
	Book addBook(Book * book);
	void getBook(Book * book);
};





