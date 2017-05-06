// Library-Books.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "Library.h"
#include <string>

int main()
{
	
	Book book[5];
	

	book[0].addBook(book);
	book[0].getBook(book);



	system("pause");
    return 0;
}

//int main()
//{
//	Book book;
//	addBook(&book);
//	getBook(&book);
//
//	system("pause");
//	return 0;
//}
