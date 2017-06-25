//============================================================================
// Name        : Main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Product.h"
#include<vector>
#include"pugixml.hpp"
#include"Firm.h"

using namespace std;

double dailyOborotMagazine(vector<Product*>& example){
	double daylyOborot =0;
	for(unsigned int i =0;i<example.size();i++){
		daylyOborot+=example.at(i)->getPrice()*example.at(i)->getSoldCounter();
	}
	return daylyOborot;
}
void information(vector<Product*>& example){
	for(unsigned int i=0;i<example.size();i++)
	{
		example.at(i)->printInfo();
		cout<<"----------------------------"<<endl;
	}

}

/*void fillDoc(pugi::xml_document& doc1,vector<Product*>& store)
{
	pugi::xml_node products = doc1.child("store");
				for (pugi::xml_node product = products.child("product"); product;
						product = product.next_sibling("product")) {
		            Product* someProduct=new Product(product.child_value("name"),product.child_value("marka"),product.child_value("model"),
		            		product.child("soldCounter").text().as_int(),product.child("price").text().as_double());
		            store.push_back(someProduct);
				}
}*/
int main() {

	vector<Product*> storeOne;
	vector<Product*> storeTwo;
	vector<Product*> storeThree;

	pugi::xml_document doc;
	pugi::xml_document doc2;
	pugi::xml_document doc3;

			if (!doc.load_file("StoreOne.xml")){
						cout<<"Error loading storeOne xml";
			}
			if (!doc.load_file("StoreTwo.xml")){
						cout<<"Error loading storeTwo xml";
						}
			if (!doc.load_file("StoreThree.xml")){
						cout<<"Error loading storeThree xml";
						}

			pugi::xml_parse_result result = doc.load_file("StoreOne.xml");
			pugi::xml_parse_result result2 = doc2.load_file("StoreTwo.xml");
			pugi::xml_parse_result result3 = doc3.load_file("StoreThree.xml");



			pugi::xml_node products = doc.child("store");
							for (pugi::xml_node product = products.child("product"); product;
									product = product.next_sibling("product")) {
					            Product* someProduct=new Product(product.child_value("name"),product.child_value("marka"),product.child_value("model"),
					            		product.child("soldCounter").text().as_int(),product.child("price").text().as_double());
					            storeOne.push_back(someProduct);
			}



			pugi::xml_node productsTwo = doc2.child("store");
							for (pugi::xml_node productTwo = productsTwo.child("product"); productTwo;
									productTwo = productTwo.next_sibling("product")) {
								Product* someProductTwo=new Product(productTwo.child_value("name"),productTwo.child_value("marka"),productTwo.child_value("model"),
										productTwo.child("soldCounter").text().as_int(),productTwo.child("price").text().as_double());
								storeTwo.push_back(someProductTwo);
										}
			pugi::xml_node productsThree = doc3.child("store");
							for (pugi::xml_node productThree = productsThree.child("product"); productThree;
									productThree = productThree.next_sibling("product")) {
								Product* someProductThree=new Product(productThree.child_value("name"),productThree.child_value("marka"),productThree.child_value("model"),
										productThree.child("soldCounter").text().as_int(),productThree.child("price").text().as_double());
								storeThree.push_back(someProductThree);
										}

			information(storeOne);
			information(storeTwo);
			information(storeThree);
			cout<<"Dayly ob on store1 :"<<dailyOborotMagazine(storeOne)<<endl;
			cout<<"Dayly ob on store2 :"<<dailyOborotMagazine(storeTwo)<<endl;
			cout<<"Dayly ob on store3 :"<<dailyOborotMagazine(storeThree)<<endl;

           Firm* firm = new Firm(storeOne,storeTwo,storeThree);
           firm->storeWithHighOborot();
           cout<<"BestArt:      "<<endl;
           firm->bestArticul();
	return 0;
}
