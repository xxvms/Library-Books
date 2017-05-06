#include "Library.h"
#include <string>
#include <iostream>


Library::Library()
{
}

Book Library::addBook2Lib(Book * book)
{
	

}


Library::~Library()
{
}

Book::Book()
{


}
Book Book::addBook(Book* book)
{
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Book " << i+1 <<  " please provide Author: ";
		std::cin >> book->author;
		std::cout << "Please provide Title: ";
		std::cin >> book->title;
		std::cout << "Please provide publication year: ";
		std::cin >> book->publicationYear;
		std::cout << std::endl;
	}
	return* book;
}
void Book::getBook(Book* book)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << std::endl;
		std::cout << "Book "<< i+1 << " Author: ";
		std::cout << book->author << std::endl;
		std::cout << "Book title: ";
		std::cout << book->title << std::endl;
		std::cout << "Book publication Year: ";
		std::cout << book->publicationYear;
		std::cout << std::endl;
	}
	
}
