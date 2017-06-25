/*
 * Store.cpp
 *
 *  Created on: May 31, 2017
 *      Author: LyBo-Pc
 */

#include "Store.h"

Store::Store() {
	// TODO Auto-generated constructor stub

}

void Store::traverseFiles(const string& xmlName) {

	pugi::xml_document doc;
	pugi::xml_parse_result result = doc.load_file(xmlName.data());

    pugi::xml_node store = doc.first_child();

    Product someProduct;
    for(pugi::xml_node product = store.child("product");product;product=product.next_sibling("product")){
    	someProduct.setName(product.child_value("name"));
    	someProduct.setMarka(product.child_value("marka"));
    	someProduct.setModel(product.child_value("model"));
    	someProduct.setPrice(product.child("price").text().as_double());
    	someProduct.setQuantity(product.child("soldCounter").text().as_int());
    	products.push_back(someProduct);
    }





}

void Store::print() {
      for(unsigned int i =0 ;i<products.size();i++){
    	  products[i].print();
      }
      cout<<"-----------------------------";
}

map<string,double> Store::getOborot()
{

	map<string,double> result;

	for(vector<Product>::iterator it = products.begin();it !=products.end();it++)
	{
		if(result.find(it->getName()) == result.end()){
			result.insert(map<string,double>::value_type(it->getName(),it->getOborot()));
		}
		else
			result[it->getName()] +=it->getOborot();

	}
	return result;



}

Store::~Store() {
	// TODO Auto-generated destructor stub
}

void Store::printOborot(map<string, double> magazin) {

	//for(vector<Product>::iterator it = magazin.begin();it !=magazin.end();it++){
	//	cout<<it->getOborot();
	//}
}

double Store::printMyOborot() {
	double result;
	for(vector<Product>::iterator it = products.begin(); it!=products.end() ; it++){
		result += it->getOborot();
		//cout<<"Magazine oborot : "<<result<<endl;
	}
	//cout<<"final oborot : " <<result<<endl;
	return result;
}
