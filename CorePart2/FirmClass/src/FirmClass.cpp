//============================================================================
// Name        : FirmClass.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Product.h"
#include"Firm.h"
#include"Store.h"
using namespace std;

int main() {

     Store firstStore;
     Store secondStore;
     Store thirdStore;
     Firm firmOfStores;
     firstStore.traverseFiles("StoreOne.xml");
     secondStore.traverseFiles("StoreTwo.xml");
     thirdStore.traverseFiles("StoreThree");

     /*firmOfStores.firm->push_back(firstStore);
     firmOfStores.firm->push_back(secondStore);
     firmOfStores.firm->push_back(thirdStore);*/

    firmOfStores.addingStore(firstStore);
    firmOfStores.addingStore(secondStore);
    firmOfStores.addingStore(thirdStore);
    firmOfStores.dailyOborot();
    cout<<endl;
    cout<<firstStore.printMyOborot()+secondStore.printMyOborot()+thirdStore.printMyOborot()<<endl;
	return 0;
}
