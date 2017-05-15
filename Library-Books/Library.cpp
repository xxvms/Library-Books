#include "Library.h"
#include <string>
#include <iostream>


Library::Library()
{
}

void Library::addBook2Lib(Book* book)
{
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Book " << i + 1 << " ID: ";
		std::cin >> book[i].ID;
		std::cout << "Book " << i+1 << " Author: ";
		std::cin >> book[i].author;
		std::cout << "Book " << i + 1 << " Title: "; 
		std::cin >> book[i].title;
		std::cout << "Book " << i + 1 << " Publication year: ";
		std::cin >> book[i].publicationYear;

	}
}

Book Library::getBook(int bookId)
{
	std::cout << "Please provide book ID: ";
	std::cin >> bookId;




	return Book();
}


//Book Library::getBook(int index)
//{
//
//	//return books[index];
//}


Library::~Library()
{
}

