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
	Book bk[5];
	Book* bk1 = bk;

	lib.addBook2Lib(bk1);

	

	system("pause");
    return 0;
}
