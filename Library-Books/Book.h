#pragma once
#include <string>

class Book
{
	std::string author{};
	std::string title{};
	int publicationYear{};
	int ID{};

public:
	friend class Library;
	Book();
	~Book();
	void getBook();
};


