//============================================================================
// Name        : BooksMain.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"pugixml.hpp"
#include<Book.h>
#include<vector>
#include<Functions.h>
using namespace std;


int main() {
	/*
		 // Load document
		 pugi::xml_document doc;

		 pugi::xml_parse_result result = doc.load_file("tree.xml");

		 std::cout << "Load result: " << result.description() << ", mesh name: "
		 << doc.child("mesh").attribute("name").value() << std::endl;
		 // end Load document
		 */
		/*
		 // load error handling
		 check_xml("<node attr='value'><child>text</child></node>");
		 check_xml("<node attr='value'><child>text</chil></node>");
		 check_xml("<node attr='value'><child>text</child>");
		 check_xml("<node attr='value\"><child>text</child></node>");
		 check_xml("<node attr='value'><#tag /></node>");
		 // end load error handling

		 */
        Functions functions;
	    vector<Book*> library;
		// traverse
		pugi::xml_document doc;
		if (!doc.load_file("Books.xml")){
		cout<<"dasdasda";
		}


		pugi::xml_node books = doc.child("catalog");


		// tag::basic[]
	/*	for (pugi::xml_node book = books.first_child(); book;
				book = book.next_sibling("book")) {
			cout << "Book:";

			for (pugi::xml_attribute attr = books.first_attribute(); attr;
					attr = attr.next_attribute()) {
				std::cout << " " << attr.name() << "=" << attr.value();
			}

			cout << endl;
		}*/
		// end::basic[]

		//cout << endl;

		// tag::data[]
		for (pugi::xml_node book = books.child("book"); book;
				book = book.next_sibling("book")) {
			std::cout << "  Id  " << book.child_value("id");
			std::cout << "  Author  "<<book.child_value("author");
			std::cout << "  Title  " << book.child_value("title");
			std::cout << "  Genre  " << book.child_value("genre");
			std::cout << "  Price  " << book.child("price").text().as_double();
			std::cout << "  Publish Date " << book.child_value("publish_date");
            cout<<endl;
            Book* someBook=new Book(book.child_value("author"),book.child_value("title"),book.child_value("genre"),
            		book.child_value("publish_date"),book.child_value("id"),book.child("price").text().as_double());
            library.push_back(someBook);
			// object creation
			// add to vector/map
		}
		// end::data[]

		std::cout << std::endl;





	return 0;
}
