// Library-Books.cpp : Defines the entry point for the console application.
//
// This is assigment for Arek class - creating a Library with books
//

#include <iostream>
#include "Library.h"
#include <string>
#include "Book.h"

int main()
{
	Library lib;
	Book bk[3];
	Book* bk1 = bk;

	lib.addBook2Lib(bk1);


	
	bk[0].getBook();
	bk[1].getBook();
	bk[2].getBook();

	
	//lib.getBook(bk1);

	system("pause");
    return 0;
}
