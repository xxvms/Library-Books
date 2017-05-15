#include "Book.h"
#include <iostream>

Book::Book()
{
	/*std::string author{ " " };
	std::string title{ " " };
	int publicationYear{ 0 };
	int ID{ 0 };*/
}

Book::~Book()
{
}

void Book::getBook()
{
	std::cout << "Book ID: " << ID << std::endl;
	std::cout << "Book Title: " << title << std::endl;
	std::cout << "Book Author: " << author << std::endl;
	std::cout << "Book Publication Year: " << publicationYear << std::endl;
}
